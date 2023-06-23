// Fill out your copyright notice in the Description page of Project Settings.


#include "RestApiBlockadelabs.h"
#include "Http.h"
#include "Json.h"

void URestApiBlockadelabs::GenerateSkybox(FString ApiKey, FString Prompt, int32 SkyboxStyleId, FString WebhookUrl, const FOnGenerateSkyboxSuccess& OnSuccessCallback, const FGenerateSkyboxError& OnErrorCallback, FString NegativeText, int32 Seed, int32 RemixImagineId, bool bReturnDepth)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL("https://backend.blockadelabs.com/api/v1/skybox");
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");

    FString JsonString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
    Writer->WriteObjectStart();
    Writer->WriteValue(TEXT("api_key"), ApiKey);
    Writer->WriteValue(TEXT("prompt"), Prompt);
    Writer->WriteValue(TEXT("style_id"), SkyboxStyleId);
    Writer->WriteValue(TEXT("webhook_url"), WebhookUrl);
    if (!NegativeText.IsEmpty()) Writer->WriteValue(TEXT("negative_text"), NegativeText);
    if (Seed != 0) Writer->WriteValue(TEXT("seed"), Seed);
    if (RemixImagineId != 0) Writer->WriteValue(TEXT("remix_imagine_id"), RemixImagineId);
    if (bReturnDepth) Writer->WriteValue(TEXT("return_depth"), bReturnDepth);
    Writer->WriteObjectEnd();
    Writer->Close();

    Request->SetContentAsString(JsonString);

    Request->OnProcessRequestComplete().BindLambda([OnSuccessCallback, OnErrorCallback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (!bWasSuccessful || !Response.IsValid())
            {
                OnErrorCallback.ExecuteIfBound(TEXT("Failed to generate skybox. Network error."));
                return;
            }

            if (Response->GetResponseCode() != 200)
            {
                FString ErrorMessage = FString::Printf(TEXT("Failed to generate skybox. HTTP status code: %d. Error message: %s"), Response->GetResponseCode(), *Response->GetContentAsString());
                OnErrorCallback.ExecuteIfBound(ErrorMessage);
                return;
            }

            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

            if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
            {
                FString SkyboxUrl = JsonObject->GetStringField("file_url");
                int32 SkyboxId = JsonObject->GetIntegerField("skybox_id");

            }
            else
            {
                OnErrorCallback.ExecuteIfBound(TEXT("Failed to parse the response JSON."));
            }
        });

    Request->ProcessRequest();
}

void URestApiBlockadelabs::GetImagineHistory(FString ApiKey, const FOnGetImagineHistorySuccess& OnSuccessCallback, const FGetImagineHistoryError& OnErrorCallback)
{

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(FString::Printf(TEXT("https://backend.blockadelabs.com/api/v1/imagine/myRequests?api_key=%s"), *ApiKey));
    Request->SetVerb("GET");

    Request->OnProcessRequestComplete().BindLambda([OnSuccessCallback, OnErrorCallback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (!bWasSuccessful || !Response.IsValid())
            {
                OnErrorCallback.ExecuteIfBound(TEXT("Failed to get my requests. Network error."));
                return;
            }

            if (Response->GetResponseCode() != 200)
            {
                FString ErrorMessage = FString::Printf(TEXT("Failed to get my requests. HTTP status code: %d. Error message: %s"), Response->GetResponseCode(), *Response->GetContentAsString());
                OnErrorCallback.ExecuteIfBound(ErrorMessage);
                return;
            }

            TArray<FMyRequestData> RequestsData;
            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

            if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
            {
                const TArray<TSharedPtr<FJsonValue>>* RequestsArray = nullptr;
                if (JsonObject->TryGetArrayField("data", RequestsArray))
                {
                    for (const TSharedPtr<FJsonValue>& JsonValue : *RequestsArray)
                    {
                        if (JsonValue->Type == EJson::Object)
                        {
                            const TSharedPtr<FJsonObject>& JsonObj = JsonValue->AsObject();

                            FMyRequestData RequestData;
                            RequestData.Id = JsonObj->GetIntegerField("id");
                            RequestData.Title = JsonObj->GetStringField("title");
                            RequestData.Prompt = JsonObj->GetStringField("prompt");
                           // RequestData.Generator = JsonObj->GetStringField("generator");
                            RequestData.Status = JsonObj->GetStringField("status");
                            RequestData.file_url = JsonObj->GetStringField("file_url");
                            RequestData.thumb_url = JsonObj->GetStringField("thumb_url");


                            FString DepthMapUrlValue;
                            if (JsonObj->TryGetStringField("depth_map_url", DepthMapUrlValue))
                            {
                                RequestData.depth_map_url = DepthMapUrlValue;
                            }
                            else
                            {
                                RequestData.depth_map_url = "";
                            }

                            RequestsData.Add(RequestData);
                        }
                    }
                }

                OnSuccessCallback.ExecuteIfBound(RequestsData);
            }
            else
            {
                OnErrorCallback.ExecuteIfBound(TEXT("Failed to parse the response JSON."));
            }
        });

    Request->ProcessRequest();
}

// Copyright 2023 Adem KILIC

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RestApiBlockadelabs.generated.h"




USTRUCT(BlueprintType)
struct FMyRequestData
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
        int32 Id;

    UPROPERTY(BlueprintReadWrite)
        FString Title;

    UPROPERTY(BlueprintReadWrite)
        FString Prompt;

    UPROPERTY(BlueprintReadWrite)
        FString Generator;

    UPROPERTY(BlueprintReadWrite)
        FString Status;

    UPROPERTY(BlueprintReadWrite)
        FString file_url;

    UPROPERTY(BlueprintReadWrite)
        FString thumb_url;

    UPROPERTY(BlueprintReadWrite)
        FString depth_map_url;

    UPROPERTY(BlueprintReadWrite)
        FDateTime CreatedAt;

    UPROPERTY(BlueprintReadWrite)
        FDateTime UpdatedAt;
};


DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetImagineHistorySuccess, const TArray<FMyRequestData>&, RequestsData);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetImagineHistoryError, FString, ErrorMessage);


DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGenerateSkyboxSuccess, FString, SkyboxUrl, FString, SkyboxId);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGenerateSkyboxError, FString, ErrorMessage);

UCLASS()
class URestApiBlockadelabs : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

		UFUNCTION(BlueprintCallable, Category = "Skybox Labs")
		static void GenerateSkybox(FString ApiKey, FString Prompt, int32 SkyboxStyleId, FString WebhookUrl, const FOnGenerateSkyboxSuccess& OnSuccessCallback, const FGenerateSkyboxError& OnErrorCallback, FString NegativeText, int32 Seed, int32 RemixImagineId, bool bReturnDepth);

        UFUNCTION(BlueprintCallable, Category = "Skybox Labs")
        static void GetImagineHistory(FString ApiKey, const FOnGetImagineHistorySuccess& OnSuccessCallback, const FGetImagineHistoryError& OnErrorCallback);

};

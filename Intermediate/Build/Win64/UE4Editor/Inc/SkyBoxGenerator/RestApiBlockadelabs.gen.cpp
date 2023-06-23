// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyBoxGenerator/Private/RestApiBlockadelabs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestApiBlockadelabs() {}
// Cross Module References
	SKYBOXGENERATOR_API UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyBoxGenerator();
	SKYBOXGENERATOR_API UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature();
	SKYBOXGENERATOR_API UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature();
	SKYBOXGENERATOR_API UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature();
	SKYBOXGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMyRequestData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SKYBOXGENERATOR_API UClass* Z_Construct_UClass_URestApiBlockadelabs_NoRegister();
	SKYBOXGENERATOR_API UClass* Z_Construct_UClass_URestApiBlockadelabs();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics
	{
		struct _Script_SkyBoxGenerator_eventGenerateSkyboxError_Parms
		{
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SkyBoxGenerator_eventGenerateSkyboxError_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyBoxGenerator, nullptr, "GenerateSkyboxError__DelegateSignature", nullptr, nullptr, sizeof(_Script_SkyBoxGenerator_eventGenerateSkyboxError_Parms), Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics
	{
		struct _Script_SkyBoxGenerator_eventOnGenerateSkyboxSuccess_Parms
		{
			FString SkyboxUrl;
			FString SkyboxId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkyboxUrl;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkyboxId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::NewProp_SkyboxUrl = { "SkyboxUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SkyBoxGenerator_eventOnGenerateSkyboxSuccess_Parms, SkyboxUrl), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::NewProp_SkyboxId = { "SkyboxId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SkyBoxGenerator_eventOnGenerateSkyboxSuccess_Parms, SkyboxId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::NewProp_SkyboxUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::NewProp_SkyboxId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyBoxGenerator, nullptr, "OnGenerateSkyboxSuccess__DelegateSignature", nullptr, nullptr, sizeof(_Script_SkyBoxGenerator_eventOnGenerateSkyboxSuccess_Parms), Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics
	{
		struct _Script_SkyBoxGenerator_eventGetImagineHistoryError_Parms
		{
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SkyBoxGenerator_eventGetImagineHistoryError_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyBoxGenerator, nullptr, "GetImagineHistoryError__DelegateSignature", nullptr, nullptr, sizeof(_Script_SkyBoxGenerator_eventGetImagineHistoryError_Parms), Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics
	{
		struct _Script_SkyBoxGenerator_eventOnGetImagineHistorySuccess_Parms
		{
			TArray<FMyRequestData> RequestsData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData_Inner = { "RequestsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMyRequestData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData = { "RequestsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SkyBoxGenerator_eventOnGetImagineHistorySuccess_Parms, RequestsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::NewProp_RequestsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SkyBoxGenerator, nullptr, "OnGetImagineHistorySuccess__DelegateSignature", nullptr, nullptr, sizeof(_Script_SkyBoxGenerator_eventOnGetImagineHistorySuccess_Parms), Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FMyRequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKYBOXGENERATOR_API uint32 Get_Z_Construct_UScriptStruct_FMyRequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyRequestData, Z_Construct_UPackage__Script_SkyBoxGenerator(), TEXT("MyRequestData"), sizeof(FMyRequestData), Get_Z_Construct_UScriptStruct_FMyRequestData_Hash());
	}
	return Singleton;
}
template<> SKYBOXGENERATOR_API UScriptStruct* StaticStruct<FMyRequestData>()
{
	return FMyRequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyRequestData(FMyRequestData::StaticStruct, TEXT("/Script/SkyBoxGenerator"), TEXT("MyRequestData"), false, nullptr, nullptr);
static struct FScriptStruct_SkyBoxGenerator_StaticRegisterNativesFMyRequestData
{
	FScriptStruct_SkyBoxGenerator_StaticRegisterNativesFMyRequestData()
	{
		UScriptStruct::DeferCppStructOps<FMyRequestData>(FName(TEXT("MyRequestData")));
	}
} ScriptStruct_SkyBoxGenerator_StaticRegisterNativesFMyRequestData;
	struct Z_Construct_UScriptStruct_FMyRequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_file_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_thumb_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_depth_map_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_depth_map_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyRequestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Prompt_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, Prompt), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Prompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, Generator), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_file_url_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_file_url = { "file_url", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, file_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_file_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_file_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_thumb_url_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_thumb_url = { "thumb_url", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, thumb_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_thumb_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_thumb_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_depth_map_url_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_depth_map_url = { "depth_map_url", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, depth_map_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_depth_map_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_depth_map_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "Category", "MyRequestData" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyRequestData, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_UpdatedAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Prompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_file_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_thumb_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_depth_map_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyRequestData_Statics::NewProp_UpdatedAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyBoxGenerator,
		nullptr,
		&NewStructOps,
		"MyRequestData",
		sizeof(FMyRequestData),
		alignof(FMyRequestData),
		Z_Construct_UScriptStruct_FMyRequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyRequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyRequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyRequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyRequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SkyBoxGenerator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyRequestData"), sizeof(FMyRequestData), Get_Z_Construct_UScriptStruct_FMyRequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyRequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyRequestData_Hash() { return 2515294752U; }
	DEFINE_FUNCTION(URestApiBlockadelabs::execGetImagineHistory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccessCallback);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnErrorCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		URestApiBlockadelabs::GetImagineHistory(Z_Param_ApiKey,FOnGetImagineHistorySuccess(Z_Param_Out_OnSuccessCallback),FGetImagineHistoryError(Z_Param_Out_OnErrorCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URestApiBlockadelabs::execGenerateSkybox)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkyboxStyleId);
		P_GET_PROPERTY(FStrProperty,Z_Param_WebhookUrl);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccessCallback);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnErrorCallback);
		P_GET_PROPERTY(FStrProperty,Z_Param_NegativeText);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemixImagineId);
		P_GET_UBOOL(Z_Param_bReturnDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		URestApiBlockadelabs::GenerateSkybox(Z_Param_ApiKey,Z_Param_Prompt,Z_Param_SkyboxStyleId,Z_Param_WebhookUrl,FOnGenerateSkyboxSuccess(Z_Param_Out_OnSuccessCallback),FGenerateSkyboxError(Z_Param_Out_OnErrorCallback),Z_Param_NegativeText,Z_Param_Seed,Z_Param_RemixImagineId,Z_Param_bReturnDepth);
		P_NATIVE_END;
	}
	void URestApiBlockadelabs::StaticRegisterNativesURestApiBlockadelabs()
	{
		UClass* Class = URestApiBlockadelabs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateSkybox", &URestApiBlockadelabs::execGenerateSkybox },
			{ "GetImagineHistory", &URestApiBlockadelabs::execGetImagineHistory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics
	{
		struct RestApiBlockadelabs_eventGenerateSkybox_Parms
		{
			FString ApiKey;
			FString Prompt;
			int32 SkyboxStyleId;
			FString WebhookUrl;
			FScriptDelegate OnSuccessCallback;
			FScriptDelegate OnErrorCallback;
			FString NegativeText;
			int32 Seed;
			int32 RemixImagineId;
			bool bReturnDepth;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prompt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkyboxStyleId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WebhookUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccessCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccessCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnErrorCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnErrorCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NegativeText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemixImagineId;
		static void NewProp_bReturnDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, ApiKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, Prompt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_SkyboxStyleId = { "SkyboxStyleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, SkyboxStyleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_WebhookUrl = { "WebhookUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, WebhookUrl), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnSuccessCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnSuccessCallback = { "OnSuccessCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, OnSuccessCallback), Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGenerateSkyboxSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnSuccessCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnSuccessCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnErrorCallback = { "OnErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, OnErrorCallback), Z_Construct_UDelegateFunction_SkyBoxGenerator_GenerateSkyboxError__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnErrorCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnErrorCallback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_NegativeText = { "NegativeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, NegativeText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_RemixImagineId = { "RemixImagineId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGenerateSkybox_Parms, RemixImagineId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_bReturnDepth_SetBit(void* Obj)
	{
		((RestApiBlockadelabs_eventGenerateSkybox_Parms*)Obj)->bReturnDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_bReturnDepth = { "bReturnDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RestApiBlockadelabs_eventGenerateSkybox_Parms), &Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_bReturnDepth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_ApiKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_Prompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_SkyboxStyleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_WebhookUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnSuccessCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_OnErrorCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_NegativeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_RemixImagineId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::NewProp_bReturnDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skybox Labs" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestApiBlockadelabs, nullptr, "GenerateSkybox", nullptr, nullptr, sizeof(RestApiBlockadelabs_eventGenerateSkybox_Parms), Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics
	{
		struct RestApiBlockadelabs_eventGetImagineHistory_Parms
		{
			FString ApiKey;
			FScriptDelegate OnSuccessCallback;
			FScriptDelegate OnErrorCallback;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccessCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccessCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnErrorCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnErrorCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGetImagineHistory_Parms, ApiKey), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnSuccessCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnSuccessCallback = { "OnSuccessCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGetImagineHistory_Parms, OnSuccessCallback), Z_Construct_UDelegateFunction_SkyBoxGenerator_OnGetImagineHistorySuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnSuccessCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnSuccessCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnErrorCallback = { "OnErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RestApiBlockadelabs_eventGetImagineHistory_Parms, OnErrorCallback), Z_Construct_UDelegateFunction_SkyBoxGenerator_GetImagineHistoryError__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnErrorCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnErrorCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_ApiKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnSuccessCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::NewProp_OnErrorCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skybox Labs" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestApiBlockadelabs, nullptr, "GetImagineHistory", nullptr, nullptr, sizeof(RestApiBlockadelabs_eventGetImagineHistory_Parms), Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URestApiBlockadelabs_NoRegister()
	{
		return URestApiBlockadelabs::StaticClass();
	}
	struct Z_Construct_UClass_URestApiBlockadelabs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestApiBlockadelabs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyBoxGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URestApiBlockadelabs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URestApiBlockadelabs_GenerateSkybox, "GenerateSkybox" }, // 662309195
		{ &Z_Construct_UFunction_URestApiBlockadelabs_GetImagineHistory, "GetImagineHistory" }, // 654385934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestApiBlockadelabs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RestApiBlockadelabs.h" },
		{ "ModuleRelativePath", "Private/RestApiBlockadelabs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestApiBlockadelabs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestApiBlockadelabs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URestApiBlockadelabs_Statics::ClassParams = {
		&URestApiBlockadelabs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URestApiBlockadelabs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URestApiBlockadelabs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestApiBlockadelabs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URestApiBlockadelabs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URestApiBlockadelabs, 3137307342);
	template<> SKYBOXGENERATOR_API UClass* StaticClass<URestApiBlockadelabs>()
	{
		return URestApiBlockadelabs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URestApiBlockadelabs(Z_Construct_UClass_URestApiBlockadelabs, &URestApiBlockadelabs::StaticClass, TEXT("/Script/SkyBoxGenerator"), TEXT("URestApiBlockadelabs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestApiBlockadelabs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

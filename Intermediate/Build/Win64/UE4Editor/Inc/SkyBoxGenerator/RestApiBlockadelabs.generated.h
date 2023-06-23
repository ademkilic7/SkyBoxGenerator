// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMyRequestData;
#ifdef SKYBOXGENERATOR_RestApiBlockadelabs_generated_h
#error "RestApiBlockadelabs.generated.h already included, missing '#pragma once' in RestApiBlockadelabs.h"
#endif
#define SKYBOXGENERATOR_RestApiBlockadelabs_generated_h

#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyRequestData_Statics; \
	SKYBOXGENERATOR_API static class UScriptStruct* StaticStruct();


template<> SKYBOXGENERATOR_API UScriptStruct* StaticStruct<struct FMyRequestData>();

#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_55_DELEGATE \
struct _Script_SkyBoxGenerator_eventGenerateSkyboxError_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FGenerateSkyboxError_DelegateWrapper(const FScriptDelegate& GenerateSkyboxError, const FString& ErrorMessage) \
{ \
	_Script_SkyBoxGenerator_eventGenerateSkyboxError_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	GenerateSkyboxError.ProcessDelegate<UObject>(&Parms); \
}


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_54_DELEGATE \
struct _Script_SkyBoxGenerator_eventOnGenerateSkyboxSuccess_Parms \
{ \
	FString SkyboxUrl; \
	FString SkyboxId; \
}; \
static inline void FOnGenerateSkyboxSuccess_DelegateWrapper(const FScriptDelegate& OnGenerateSkyboxSuccess, const FString& SkyboxUrl, const FString& SkyboxId) \
{ \
	_Script_SkyBoxGenerator_eventOnGenerateSkyboxSuccess_Parms Parms; \
	Parms.SkyboxUrl=SkyboxUrl; \
	Parms.SkyboxId=SkyboxId; \
	OnGenerateSkyboxSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_51_DELEGATE \
struct _Script_SkyBoxGenerator_eventGetImagineHistoryError_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FGetImagineHistoryError_DelegateWrapper(const FScriptDelegate& GetImagineHistoryError, const FString& ErrorMessage) \
{ \
	_Script_SkyBoxGenerator_eventGetImagineHistoryError_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	GetImagineHistoryError.ProcessDelegate<UObject>(&Parms); \
}


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_50_DELEGATE \
struct _Script_SkyBoxGenerator_eventOnGetImagineHistorySuccess_Parms \
{ \
	TArray<FMyRequestData> RequestsData; \
}; \
static inline void FOnGetImagineHistorySuccess_DelegateWrapper(const FScriptDelegate& OnGetImagineHistorySuccess, TArray<FMyRequestData> const& RequestsData) \
{ \
	_Script_SkyBoxGenerator_eventOnGetImagineHistorySuccess_Parms Parms; \
	Parms.RequestsData=RequestsData; \
	OnGetImagineHistorySuccess.ProcessDelegate<UObject>(&Parms); \
}


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_SPARSE_DATA
#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetImagineHistory); \
	DECLARE_FUNCTION(execGenerateSkybox);


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetImagineHistory); \
	DECLARE_FUNCTION(execGenerateSkybox);


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestApiBlockadelabs(); \
	friend struct Z_Construct_UClass_URestApiBlockadelabs_Statics; \
public: \
	DECLARE_CLASS(URestApiBlockadelabs, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyBoxGenerator"), NO_API) \
	DECLARE_SERIALIZER(URestApiBlockadelabs)


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_INCLASS \
private: \
	static void StaticRegisterNativesURestApiBlockadelabs(); \
	friend struct Z_Construct_UClass_URestApiBlockadelabs_Statics; \
public: \
	DECLARE_CLASS(URestApiBlockadelabs, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyBoxGenerator"), NO_API) \
	DECLARE_SERIALIZER(URestApiBlockadelabs)


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestApiBlockadelabs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestApiBlockadelabs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestApiBlockadelabs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestApiBlockadelabs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestApiBlockadelabs(URestApiBlockadelabs&&); \
	NO_API URestApiBlockadelabs(const URestApiBlockadelabs&); \
public:


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestApiBlockadelabs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestApiBlockadelabs(URestApiBlockadelabs&&); \
	NO_API URestApiBlockadelabs(const URestApiBlockadelabs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestApiBlockadelabs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestApiBlockadelabs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestApiBlockadelabs)


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_PRIVATE_PROPERTY_OFFSET
#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_57_PROLOG
#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_PRIVATE_PROPERTY_OFFSET \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_SPARSE_DATA \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_RPC_WRAPPERS \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_INCLASS \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_PRIVATE_PROPERTY_OFFSET \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_SPARSE_DATA \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_INCLASS_NO_PURE_DECLS \
	SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYBOXGENERATOR_API UClass* StaticClass<class URestApiBlockadelabs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SkyboxLabsP_Plugins_SkyBoxGenerator_Source_SkyBoxGenerator_Private_RestApiBlockadelabs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

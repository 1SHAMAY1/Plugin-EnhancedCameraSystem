// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/EnhancedPlayerCameraManager.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedPlayerCameraManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_AEnhancedPlayerCameraManager();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_AEnhancedPlayerCameraManager_NoRegister();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase_NoRegister();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeMap_NoRegister();
	ENHANCEDCAMERASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCameraStackEntry();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraStackEntry;
class UScriptStruct* FCameraStackEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraStackEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraStackEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraStackEntry, (UObject*)Z_Construct_UPackage__Script_EnhancedCameraSystem(), TEXT("CameraStackEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CameraStackEntry.OuterSingleton;
}
template<> ENHANCEDCAMERASYSTEM_API UScriptStruct* StaticStruct<FCameraStackEntry>()
{
	return FCameraStackEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraStackEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraStackEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraStackEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Mode_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraStackEntry, Mode), Z_Construct_UClass_UCameraModeConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Mode_MetaData), Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Mode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraStackEntry, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Tag_MetaData), Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraStackEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraStackEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
		nullptr,
		&NewStructOps,
		"CameraStackEntry",
		Z_Construct_UScriptStruct_FCameraStackEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraStackEntry_Statics::PropPointers),
		sizeof(FCameraStackEntry),
		alignof(FCameraStackEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraStackEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraStackEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraStackEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCameraStackEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraStackEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraStackEntry.InnerSingleton, Z_Construct_UScriptStruct_FCameraStackEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraStackEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(AEnhancedPlayerCameraManager::execSetCameraModeMap)
	{
		P_GET_OBJECT(UCameraModeMap,Z_Param_NewMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraModeMap(Z_Param_NewMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnhancedPlayerCameraManager::execPopCameraMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopCameraMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnhancedPlayerCameraManager::execPushCameraMode)
	{
		P_GET_OBJECT(UCameraModeConfigBase,Z_Param_NewMode);
		P_GET_STRUCT(FGameplayTag,Z_Param_OptionalTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushCameraMode(Z_Param_NewMode,Z_Param_OptionalTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnhancedPlayerCameraManager::execSetCameraModeConfig)
	{
		P_GET_OBJECT(UCameraModeConfigBase,Z_Param_NewMode);
		P_GET_STRUCT(FGameplayTag,Z_Param_OptionalTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraModeConfig(Z_Param_NewMode,Z_Param_OptionalTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnhancedPlayerCameraManager::execSetCameraModeByTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ModeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraModeByTag(Z_Param_ModeTag);
		P_NATIVE_END;
	}
	void AEnhancedPlayerCameraManager::StaticRegisterNativesAEnhancedPlayerCameraManager()
	{
		UClass* Class = AEnhancedPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PopCameraMode", &AEnhancedPlayerCameraManager::execPopCameraMode },
			{ "PushCameraMode", &AEnhancedPlayerCameraManager::execPushCameraMode },
			{ "SetCameraModeByTag", &AEnhancedPlayerCameraManager::execSetCameraModeByTag },
			{ "SetCameraModeConfig", &AEnhancedPlayerCameraManager::execSetCameraModeConfig },
			{ "SetCameraModeMap", &AEnhancedPlayerCameraManager::execSetCameraModeMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Pop to previous mode */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Pop to previous mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnhancedPlayerCameraManager, nullptr, "PopCameraMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics
	{
		struct EnhancedPlayerCameraManager_eventPushCameraMode_Parms
		{
			UCameraModeConfigBase* NewMode;
			FGameplayTag OptionalTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_NewMode_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerCameraManager_eventPushCameraMode_Parms, NewMode), Z_Construct_UClass_UCameraModeConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_NewMode_MetaData), Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_NewMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_OptionalTag_MetaData[] = {
		{ "Categories", "EGCM" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_OptionalTag = { "OptionalTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerCameraManager_eventPushCameraMode_Parms, OptionalTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_OptionalTag_MetaData), Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_OptionalTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_NewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::NewProp_OptionalTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Push new mode (saves previous) */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Push new mode (saves previous)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnhancedPlayerCameraManager, nullptr, "PushCameraMode", nullptr, nullptr, Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::EnhancedPlayerCameraManager_eventPushCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::EnhancedPlayerCameraManager_eventPushCameraMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics
	{
		struct EnhancedPlayerCameraManager_eventSetCameraModeByTag_Parms
		{
			FGameplayTag ModeTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModeTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::NewProp_ModeTag_MetaData[] = {
		{ "Categories", "EGCM.Mode" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::NewProp_ModeTag = { "ModeTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerCameraManager_eventSetCameraModeByTag_Parms, ModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::NewProp_ModeTag_MetaData), Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::NewProp_ModeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::NewProp_ModeTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Set mode by tag at runtime */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Set mode by tag at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnhancedPlayerCameraManager, nullptr, "SetCameraModeByTag", nullptr, nullptr, Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::EnhancedPlayerCameraManager_eventSetCameraModeByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::EnhancedPlayerCameraManager_eventSetCameraModeByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics
	{
		struct EnhancedPlayerCameraManager_eventSetCameraModeConfig_Parms
		{
			UCameraModeConfigBase* NewMode;
			FGameplayTag OptionalTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_NewMode_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerCameraManager_eventSetCameraModeConfig_Parms, NewMode), Z_Construct_UClass_UCameraModeConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_NewMode_MetaData), Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_NewMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_OptionalTag_MetaData[] = {
		{ "Categories", "EGCM" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_OptionalTag = { "OptionalTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerCameraManager_eventSetCameraModeConfig_Parms, OptionalTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_OptionalTag_MetaData), Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_OptionalTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_NewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::NewProp_OptionalTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Directly set mode */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Directly set mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnhancedPlayerCameraManager, nullptr, "SetCameraModeConfig", nullptr, nullptr, Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::EnhancedPlayerCameraManager_eventSetCameraModeConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::EnhancedPlayerCameraManager_eventSetCameraModeConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics
	{
		struct EnhancedPlayerCameraManager_eventSetCameraModeMap_Parms
		{
			UCameraModeMap* NewMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::NewProp_NewMap = { "NewMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerCameraManager_eventSetCameraModeMap_Parms, NewMap), Z_Construct_UClass_UCameraModeMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::NewProp_NewMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Replace the CameraModeMap asset at runtime */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Replace the CameraModeMap asset at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnhancedPlayerCameraManager, nullptr, "SetCameraModeMap", nullptr, nullptr, Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::EnhancedPlayerCameraManager_eventSetCameraModeMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::EnhancedPlayerCameraManager_eventSetCameraModeMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnhancedPlayerCameraManager);
	UClass* Z_Construct_UClass_AEnhancedPlayerCameraManager_NoRegister()
	{
		return AEnhancedPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeMapAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeMapAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveModeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveModeTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnhancedPlayerCameraManager_PopCameraMode, "PopCameraMode" }, // 1532702710
		{ &Z_Construct_UFunction_AEnhancedPlayerCameraManager_PushCameraMode, "PushCameraMode" }, // 4072297887
		{ &Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeByTag, "SetCameraModeByTag" }, // 941634755
		{ &Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeConfig, "SetCameraModeConfig" }, // 2957516148
		{ &Z_Construct_UFunction_AEnhancedPlayerCameraManager_SetCameraModeMap, "SetCameraModeMap" }, // 605072548
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Enhanced PlayerCameraManager which reads camera mode data assets and applies transforms.\n */" },
		{ "IncludePath", "EnhancedPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Enhanced PlayerCameraManager which reads camera mode data assets and applies transforms." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraModeMapAsset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Map asset (tag -> config) */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Map asset (tag -> config)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraModeMapAsset = { "CameraModeMapAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnhancedPlayerCameraManager, CameraModeMapAsset), Z_Construct_UClass_UCameraModeMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraModeMapAsset_MetaData), Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraModeMapAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Currently active mode */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Currently active mode" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveMode = { "ActiveMode", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnhancedPlayerCameraManager, ActiveMode), Z_Construct_UClass_UCameraModeConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveMode_MetaData), Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveModeTag_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Associated tag */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Associated tag" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveModeTag = { "ActiveModeTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnhancedPlayerCameraManager, ActiveModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveModeTag_MetaData), Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveModeTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack_Inner = { "CameraStack", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraStackEntry, METADATA_PARAMS(0, nullptr) }; // 2288060854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack_MetaData[] = {
		{ "Comment", "/** Simple non-additive stack (push/pop) */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerCameraManager.h" },
		{ "ToolTip", "Simple non-additive stack (push/pop)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack = { "CameraStack", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnhancedPlayerCameraManager, CameraStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack_MetaData), Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack_MetaData) }; // 2288060854
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraModeMapAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_ActiveModeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::NewProp_CameraStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnhancedPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::ClassParams = {
		&AEnhancedPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnhancedPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_AEnhancedPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnhancedPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AEnhancedPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnhancedPlayerCameraManager.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UClass* StaticClass<AEnhancedPlayerCameraManager>()
	{
		return AEnhancedPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnhancedPlayerCameraManager);
	AEnhancedPlayerCameraManager::~AEnhancedPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics::ScriptStructInfo[] = {
		{ FCameraStackEntry::StaticStruct, Z_Construct_UScriptStruct_FCameraStackEntry_Statics::NewStructOps, TEXT("CameraStackEntry"), &Z_Registration_Info_UScriptStruct_CameraStackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraStackEntry), 2288060854U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnhancedPlayerCameraManager, AEnhancedPlayerCameraManager::StaticClass, TEXT("AEnhancedPlayerCameraManager"), &Z_Registration_Info_UClass_AEnhancedPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnhancedPlayerCameraManager), 1628710482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_3700347731(TEXT("/Script/EnhancedCameraSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedPlayerCameraManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

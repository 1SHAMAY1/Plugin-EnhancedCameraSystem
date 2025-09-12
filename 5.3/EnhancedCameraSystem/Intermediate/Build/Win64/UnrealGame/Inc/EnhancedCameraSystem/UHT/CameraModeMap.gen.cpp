// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/CameraModeMap.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModeMap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase_NoRegister();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeMap();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeMap_NoRegister();
	ENHANCEDCAMERASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCameraModeMapEntry();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraModeMapEntry;
class UScriptStruct* FCameraModeMapEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraModeMapEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraModeMapEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraModeMapEntry, (UObject*)Z_Construct_UPackage__Script_EnhancedCameraSystem(), TEXT("CameraModeMapEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CameraModeMapEntry.OuterSingleton;
}
template<> ENHANCEDCAMERASYSTEM_API UScriptStruct* StaticStruct<FCameraModeMapEntry>()
{
	return FCameraModeMapEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModeConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraModeMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraModeMapEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeTag_MetaData[] = {
		{ "Categories", "EGCM.Mode" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraModeMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeTag = { "ModeTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraModeMapEntry, ModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeTag_MetaData), Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeConfig_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraModeMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeConfig = { "ModeConfig", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraModeMapEntry, ModeConfig), Z_Construct_UClass_UCameraModeConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeConfig_MetaData), Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeConfig_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewProp_ModeConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
		nullptr,
		&NewStructOps,
		"CameraModeMapEntry",
		Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::PropPointers),
		sizeof(FCameraModeMapEntry),
		alignof(FCameraModeMapEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCameraModeMapEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraModeMapEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraModeMapEntry.InnerSingleton, Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraModeMapEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UCameraModeMap::execFindModeByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraModeConfigBase**)Z_Param__Result=P_THIS->FindModeByTag(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	void UCameraModeMap::StaticRegisterNativesUCameraModeMap()
	{
		UClass* Class = UCameraModeMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindModeByTag", &UCameraModeMap::execFindModeByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics
	{
		struct CameraModeMap_eventFindModeByTag_Parms
		{
			FGameplayTag Tag;
			UCameraModeConfigBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeMap_eventFindModeByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeMap_eventFindModeByTag_Parms, ReturnValue), Z_Construct_UClass_UCameraModeConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraModeMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModeMap, nullptr, "FindModeByTag", nullptr, nullptr, Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::CameraModeMap_eventFindModeByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::CameraModeMap_eventFindModeByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraModeMap_FindModeByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModeMap_FindModeByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraModeMap);
	UClass* Z_Construct_UClass_UCameraModeMap_NoRegister()
	{
		return UCameraModeMap::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModeMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModeMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeMap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraModeMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraModeMap_FindModeByTag, "FindModeByTag" }, // 418052513
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeMap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Map from GameplayTag -> CameraModeConfig.\n */" },
		{ "IncludePath", "CameraModeMap.h" },
		{ "ModuleRelativePath", "Public/CameraModeMap.h" },
		{ "ToolTip", "Map from GameplayTag -> CameraModeConfig." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraModeMapEntry, METADATA_PARAMS(0, nullptr) }; // 253999207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraModeMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeMap, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries_MetaData), Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries_MetaData) }; // 253999207
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModeMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeMap_Statics::NewProp_Entries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModeMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModeMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraModeMap_Statics::ClassParams = {
		&UCameraModeMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraModeMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeMap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraModeMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCameraModeMap()
	{
		if (!Z_Registration_Info_UClass_UCameraModeMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraModeMap.OuterSingleton, Z_Construct_UClass_UCameraModeMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraModeMap.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UClass* StaticClass<UCameraModeMap>()
	{
		return UCameraModeMap::StaticClass();
	}
	UCameraModeMap::UCameraModeMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModeMap);
	UCameraModeMap::~UCameraModeMap() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics::ScriptStructInfo[] = {
		{ FCameraModeMapEntry::StaticStruct, Z_Construct_UScriptStruct_FCameraModeMapEntry_Statics::NewStructOps, TEXT("CameraModeMapEntry"), &Z_Registration_Info_UScriptStruct_CameraModeMapEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraModeMapEntry), 253999207U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraModeMap, UCameraModeMap::StaticClass, TEXT("UCameraModeMap"), &Z_Registration_Info_UClass_UCameraModeMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraModeMap), 1988863462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_712989916(TEXT("/Script/EnhancedCameraSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

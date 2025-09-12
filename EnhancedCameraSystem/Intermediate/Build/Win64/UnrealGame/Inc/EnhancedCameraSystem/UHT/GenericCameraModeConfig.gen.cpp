// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/CameraModeConfigs/GenericCameraModeConfig.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericCameraModeConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UGenericCameraModeConfig();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UGenericCameraModeConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	void UGenericCameraModeConfig::StaticRegisterNativesUGenericCameraModeConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenericCameraModeConfig);
	UClass* Z_Construct_UClass_UGenericCameraModeConfig_NoRegister()
	{
		return UGenericCameraModeConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGenericCameraModeConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FollowSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedRotation_MetaData[];
#endif
		static void NewProp_bUseFixedRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPostProcess_MetaData[];
#endif
		static void NewProp_bApplyPostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericCameraModeConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModeConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UGenericCameraModeConfig\n *\n * A general-purpose camera mode configuration class that can be created and customized \n * directly within the editor. Designed to be instanced and edited inline for flexible \n * per-camera setup, it provides a foundation for defining camera behavior through data-driven \n * configurations without requiring custom subclasses for every variation.\n *\n * Key Features:\n * - BlueprintType: Exposed to Blueprints for data-driven workflows.\n * - EditInlineNew / DefaultToInstanced: Supports inline editing and instancing directly \n *   inside other assets (e.g., config maps, mode containers).\n * - Extends UCameraModeConfigBase: Integrates into the Enhanced Camera System as a reusable \n *   and extendable configuration unit.\n *\n * Typical Use:\n * Use this class to define default camera mode parameters, then embed or reference it in \n * higher-level camera configuration assets to drive runtime camera behavior.\n */" },
		{ "IncludePath", "CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ToolTip", "UGenericCameraModeConfig\n\nA general-purpose camera mode configuration class that can be created and customized\ndirectly within the editor. Designed to be instanced and edited inline for flexible\nper-camera setup, it provides a foundation for defining camera behavior through data-driven\nconfigurations without requiring custom subclasses for every variation.\n\nKey Features:\n- BlueprintType: Exposed to Blueprints for data-driven workflows.\n- EditInlineNew / DefaultToInstanced: Supports inline editing and instancing directly\n  inside other assets (e.g., config maps, mode containers).\n- Extends UCameraModeConfigBase: Integrates into the Enhanced Camera System as a reusable\n  and extendable configuration unit.\n\nTypical Use:\nUse this class to define default camera mode parameters, then embed or reference it in\nhigher-level camera configuration assets to drive runtime camera behavior." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Socket name to follow (optional) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ToolTip", "Socket name to follow (optional)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FollowSocketName = { "FollowSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenericCameraModeConfig, FollowSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Offset from the socket/actor location applied to final camera position */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ToolTip", "Offset from the socket/actor location applied to final camera position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenericCameraModeConfig, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PivotOffset_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PivotOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Target offset relative to the actor (used for look-at) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ToolTip", "Target offset relative to the actor (used for look-at)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenericCameraModeConfig, CameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_CameraOffset_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_CameraOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Use a fixed rotation instead of look-at or input-driven rotation */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ToolTip", "Use a fixed rotation instead of look-at or input-driven rotation" },
	};
#endif
	void Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation_SetBit(void* Obj)
	{
		((UGenericCameraModeConfig*)Obj)->bUseFixedRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation = { "bUseFixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenericCameraModeConfig), &Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FixedRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bUseFixedRotation" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FixedRotation = { "FixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenericCameraModeConfig, FixedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FixedRotation_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FixedRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Post process override */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
		{ "ToolTip", "Post process override" },
	};
#endif
	void Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess_SetBit(void* Obj)
	{
		((UGenericCameraModeConfig*)Obj)->bApplyPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess = { "bApplyPostProcess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenericCameraModeConfig), &Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bApplyPostProcess" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/GenericCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenericCameraModeConfig, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData), Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData) }; // 2922880151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenericCameraModeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FollowSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_CameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bUseFixedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_FixedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_bApplyPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenericCameraModeConfig_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericCameraModeConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenericCameraModeConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenericCameraModeConfig_Statics::ClassParams = {
		&UGenericCameraModeConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenericCameraModeConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenericCameraModeConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericCameraModeConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGenericCameraModeConfig()
	{
		if (!Z_Registration_Info_UClass_UGenericCameraModeConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenericCameraModeConfig.OuterSingleton, Z_Construct_UClass_UGenericCameraModeConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenericCameraModeConfig.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UClass* StaticClass<UGenericCameraModeConfig>()
	{
		return UGenericCameraModeConfig::StaticClass();
	}
	UGenericCameraModeConfig::UGenericCameraModeConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericCameraModeConfig);
	UGenericCameraModeConfig::~UGenericCameraModeConfig() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_GenericCameraModeConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_GenericCameraModeConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenericCameraModeConfig, UGenericCameraModeConfig::StaticClass, TEXT("UGenericCameraModeConfig"), &Z_Registration_Info_UClass_UGenericCameraModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericCameraModeConfig), 3079228997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_GenericCameraModeConfig_h_179582051(TEXT("/Script/EnhancedCameraSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_GenericCameraModeConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_GenericCameraModeConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

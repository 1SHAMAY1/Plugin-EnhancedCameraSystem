// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/EnhancedCameraTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedCameraTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENHANCEDCAMERASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTransformResult();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraTransformResult;
class UScriptStruct* FCameraTransformResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTransformResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraTransformResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTransformResult, (UObject*)Z_Construct_UPackage__Script_EnhancedCameraSystem(), TEXT("CameraTransformResult"));
	}
	return Z_Registration_Info_UScriptStruct_CameraTransformResult.OuterSingleton;
}
template<> ENHANCEDCAMERASYSTEM_API UScriptStruct* StaticStruct<FCameraTransformResult>()
{
	return FCameraTransformResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraTransformResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPostProcess_MetaData[];
#endif
		static void NewProp_bHasPostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTransformResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Result returned by camera mode CalculateCamera */" },
		{ "ModuleRelativePath", "Public/EnhancedCameraTypes.h" },
		{ "ToolTip", "Result returned by camera mode CalculateCamera" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTransformResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/EnhancedCameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTransformResult, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/EnhancedCameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTransformResult, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/EnhancedCameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTransformResult, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_FOV_MetaData), Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_FOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/EnhancedCameraTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess_SetBit(void* Obj)
	{
		((FCameraTransformResult*)Obj)->bHasPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess = { "bHasPostProcess", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraTransformResult), &Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess_MetaData), Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/EnhancedCameraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraTransformResult, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_PostProcessSettings_MetaData), Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_PostProcessSettings_MetaData) }; // 2922880151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTransformResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_bHasPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewProp_PostProcessSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTransformResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
		nullptr,
		&NewStructOps,
		"CameraTransformResult",
		Z_Construct_UScriptStruct_FCameraTransformResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::PropPointers),
		sizeof(FCameraTransformResult),
		alignof(FCameraTransformResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraTransformResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTransformResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCameraTransformResult()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraTransformResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraTransformResult.InnerSingleton, Z_Construct_UScriptStruct_FCameraTransformResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraTransformResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedCameraTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedCameraTypes_h_Statics::ScriptStructInfo[] = {
		{ FCameraTransformResult::StaticStruct, Z_Construct_UScriptStruct_FCameraTransformResult_Statics::NewStructOps, TEXT("CameraTransformResult"), &Z_Registration_Info_UScriptStruct_CameraTransformResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraTransformResult), 916294995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedCameraTypes_h_784850252(TEXT("/Script/EnhancedCameraSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedCameraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_EnhancedCameraTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

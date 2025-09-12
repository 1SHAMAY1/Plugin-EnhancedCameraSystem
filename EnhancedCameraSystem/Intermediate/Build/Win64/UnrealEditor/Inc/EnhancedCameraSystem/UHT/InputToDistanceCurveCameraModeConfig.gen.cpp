// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputToDistanceCurveCameraModeConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_NoRegister();
	ENHANCEDCAMERASYSTEM_API UEnum* Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotToDistAxis;
	static UEnum* ERotToDistAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotToDistAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotToDistAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis, (UObject*)Z_Construct_UPackage__Script_EnhancedCameraSystem(), TEXT("ERotToDistAxis"));
		}
		return Z_Registration_Info_UEnum_ERotToDistAxis.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UEnum* StaticEnum<ERotToDistAxis>()
	{
		return ERotToDistAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::Enumerators[] = {
		{ "ERotToDistAxis::Pitch", (int64)ERotToDistAxis::Pitch },
		{ "ERotToDistAxis::Yaw", (int64)ERotToDistAxis::Yaw },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "Pitch.DisplayName", "Pitch" },
		{ "Pitch.Name", "ERotToDistAxis::Pitch" },
		{ "Yaw.DisplayName", "Yaw" },
		{ "Yaw.Name", "ERotToDistAxis::Yaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
		nullptr,
		"ERotToDistAxis",
		"ERotToDistAxis",
		Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis()
	{
		if (!Z_Registration_Info_UEnum_ERotToDistAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotToDistAxis.InnerSingleton, Z_Construct_UEnum_EnhancedCameraSystem_ERotToDistAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotToDistAxis.InnerSingleton;
	}
	DEFINE_FUNCTION(UInputToDistanceCurveCameraModeConfig::execSetYawCurveAsset)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_CurveAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYawCurveAsset(Z_Param_CurveAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputToDistanceCurveCameraModeConfig::execSetPitchCurveAsset)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_CurveAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchCurveAsset(Z_Param_CurveAsset);
		P_NATIVE_END;
	}
	void UInputToDistanceCurveCameraModeConfig::StaticRegisterNativesUInputToDistanceCurveCameraModeConfig()
	{
		UClass* Class = UInputToDistanceCurveCameraModeConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPitchCurveAsset", &UInputToDistanceCurveCameraModeConfig::execSetPitchCurveAsset },
			{ "SetYawCurveAsset", &UInputToDistanceCurveCameraModeConfig::execSetYawCurveAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics
	{
		struct InputToDistanceCurveCameraModeConfig_eventSetPitchCurveAsset_Parms
		{
			UCurveFloat* CurveAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::NewProp_CurveAsset = { "CurveAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputToDistanceCurveCameraModeConfig_eventSetPitchCurveAsset_Parms, CurveAsset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::NewProp_CurveAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera|Curve" },
		{ "Comment", "/** Blueprint-friendly setters to copy external UCurveFloat assets into the runtime curves */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Blueprint-friendly setters to copy external UCurveFloat assets into the runtime curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig, nullptr, "SetPitchCurveAsset", nullptr, nullptr, Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::InputToDistanceCurveCameraModeConfig_eventSetPitchCurveAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::InputToDistanceCurveCameraModeConfig_eventSetPitchCurveAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics
	{
		struct InputToDistanceCurveCameraModeConfig_eventSetYawCurveAsset_Parms
		{
			UCurveFloat* CurveAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::NewProp_CurveAsset = { "CurveAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputToDistanceCurveCameraModeConfig_eventSetYawCurveAsset_Parms, CurveAsset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::NewProp_CurveAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera|Curve" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig, nullptr, "SetYawCurveAsset", nullptr, nullptr, Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::InputToDistanceCurveCameraModeConfig_eventSetYawCurveAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::InputToDistanceCurveCameraModeConfig_eventSetYawCurveAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputToDistanceCurveCameraModeConfig);
	UClass* Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_NoRegister()
	{
		return UInputToDistanceCurveCameraModeConfig::StaticClass();
	}
	struct Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchDistanceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchDistanceCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDistanceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawDistanceCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePitchCurve_MetaData[];
#endif
		static void NewProp_bEnablePitchCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePitchCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchAngleInputOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchAngleInputOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableYawCurve_MetaData[];
#endif
		static void NewProp_bEnableYawCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableYawCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAngleInputOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawAngleInputOffset;
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
	UObject* (*const Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModeConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetPitchCurveAsset, "SetPitchCurveAsset" }, // 1603692504
		{ &Z_Construct_UFunction_UInputToDistanceCurveCameraModeConfig_SetYawCurveAsset, "SetYawCurveAsset" }, // 3499388338
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UInputToDistanceCurveCameraModeConfig\n *\n * A camera mode configuration that maps player input values onto a distance curve, \n * enabling smooth, data-driven control over camera distance from the subject. \n * This allows designers to define how the camera pulls in or zooms out based on \n * input intensity (e.g., analog stick, mouse wheel, or trigger axis).\n *\n * Key Features:\n * - BlueprintType: Exposed for use and customization in Blueprint workflows.\n * - EditInlineNew / DefaultToInstanced: Supports inline editing and instancing \n *   inside higher-level camera assets such as mode containers or config maps.\n * - Distance Curve Mapping: Converts input values into camera distance offsets \n *   for precise designer-driven tuning.\n * - Extends UCameraModeConfigBase: Fully integrated with the Enhanced Camera System \n *   as a modular and reusable configuration unit.\n *\n * Typical Use:\n * Use this class to implement input-responsive zooming or distance scaling behaviors, \n * such as dynamically adjusting third-person chase camera distance or simulating \n * input-based dolly effects.\n */" },
		{ "IncludePath", "CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "UInputToDistanceCurveCameraModeConfig\n\nA camera mode configuration that maps player input values onto a distance curve,\nenabling smooth, data-driven control over camera distance from the subject.\nThis allows designers to define how the camera pulls in or zooms out based on\ninput intensity (e.g., analog stick, mouse wheel, or trigger axis).\n\nKey Features:\n- BlueprintType: Exposed for use and customization in Blueprint workflows.\n- EditInlineNew / DefaultToInstanced: Supports inline editing and instancing\n  inside higher-level camera assets such as mode containers or config maps.\n- Distance Curve Mapping: Converts input values into camera distance offsets\n  for precise designer-driven tuning.\n- Extends UCameraModeConfigBase: Fully integrated with the Enhanced Camera System\n  as a modular and reusable configuration unit.\n\nTypical Use:\nUse this class to implement input-responsive zooming or distance scaling behaviors,\nsuch as dynamically adjusting third-person chase camera distance or simulating\ninput-based dolly effects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Socket name to follow (optional) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Socket name to follow (optional)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_FollowSocketName = { "FollowSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, FollowSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Pivot offset applied in pawn-local space (X forward, Y right, Z up) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Pivot offset applied in pawn-local space (X forward, Y right, Z up)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PivotOffset_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PivotOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Camera offset applied in camera-local space (X forward, Y right, Z up) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Camera offset applied in camera-local space (X forward, Y right, Z up)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, CameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_CameraOffset_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_CameraOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Runtime curve sampled by pitch (input = pitch degrees). Can be empty. */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Runtime curve sampled by pitch (input = pitch degrees). Can be empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceCurve = { "PitchDistanceCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, PitchDistanceCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceCurve_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceCurve_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Runtime curve sampled by yaw relative to pawn yaw (input = relative yaw degrees). Can be empty. */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Runtime curve sampled by yaw relative to pawn yaw (input = relative yaw degrees). Can be empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceCurve = { "YawDistanceCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, YawDistanceCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceCurve_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceCurve_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_DistanceScale_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Global scale applied after combining axis samples */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Global scale applied after combining axis samples" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, DistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_DistanceScale_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_DistanceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "// --- Pitch sampling ---\n" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "--- Pitch sampling ---" },
	};
#endif
	void Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve_SetBit(void* Obj)
	{
		((UInputToDistanceCurveCameraModeConfig*)Obj)->bEnablePitchCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve = { "bEnablePitchCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputToDistanceCurveCameraModeConfig), &Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceScale_MetaData[] = {
		{ "Category", "Curve" },
		{ "EditCondition", "bEnablePitchCurve" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceScale = { "PitchDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, PitchDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceScale_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchAngleInputOffset_MetaData[] = {
		{ "Category", "Curve" },
		{ "EditCondition", "bEnablePitchCurve" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchAngleInputOffset = { "PitchAngleInputOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, PitchAngleInputOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchAngleInputOffset_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchAngleInputOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "// --- Yaw sampling ---\n" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "--- Yaw sampling ---" },
	};
#endif
	void Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve_SetBit(void* Obj)
	{
		((UInputToDistanceCurveCameraModeConfig*)Obj)->bEnableYawCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve = { "bEnableYawCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputToDistanceCurveCameraModeConfig), &Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceScale_MetaData[] = {
		{ "Category", "Curve" },
		{ "EditCondition", "bEnableYawCurve" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceScale = { "YawDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, YawDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceScale_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawAngleInputOffset_MetaData[] = {
		{ "Category", "Curve" },
		{ "EditCondition", "bEnableYawCurve" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawAngleInputOffset = { "YawAngleInputOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, YawAngleInputOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawAngleInputOffset_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawAngleInputOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Post-process override */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
		{ "ToolTip", "Post-process override" },
	};
#endif
	void Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess_SetBit(void* Obj)
	{
		((UInputToDistanceCurveCameraModeConfig*)Obj)->bApplyPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess = { "bApplyPostProcess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputToDistanceCurveCameraModeConfig), &Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bApplyPostProcess" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputToDistanceCurveCameraModeConfig, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData) }; // 2922880151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_FollowSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_CameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_DistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnablePitchCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PitchAngleInputOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bEnableYawCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_YawAngleInputOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_bApplyPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputToDistanceCurveCameraModeConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::ClassParams = {
		&UInputToDistanceCurveCameraModeConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig()
	{
		if (!Z_Registration_Info_UClass_UInputToDistanceCurveCameraModeConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputToDistanceCurveCameraModeConfig.OuterSingleton, Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputToDistanceCurveCameraModeConfig.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UClass* StaticClass<UInputToDistanceCurveCameraModeConfig>()
	{
		return UInputToDistanceCurveCameraModeConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputToDistanceCurveCameraModeConfig);
	UInputToDistanceCurveCameraModeConfig::~UInputToDistanceCurveCameraModeConfig() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics::EnumInfo[] = {
		{ ERotToDistAxis_StaticEnum, TEXT("ERotToDistAxis"), &Z_Registration_Info_UEnum_ERotToDistAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4117412164U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputToDistanceCurveCameraModeConfig, UInputToDistanceCurveCameraModeConfig::StaticClass, TEXT("UInputToDistanceCurveCameraModeConfig"), &Z_Registration_Info_UClass_UInputToDistanceCurveCameraModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputToDistanceCurveCameraModeConfig), 4119036533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_2660942228(TEXT("/Script/EnhancedCameraSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputToDistanceCurveCameraModeConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

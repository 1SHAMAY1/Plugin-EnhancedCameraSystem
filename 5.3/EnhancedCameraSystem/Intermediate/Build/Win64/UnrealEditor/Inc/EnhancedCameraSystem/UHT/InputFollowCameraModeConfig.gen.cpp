// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/CameraModeConfigs/InputFollowCameraModeConfig.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputFollowCameraModeConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UInputFollowCameraModeConfig();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UInputFollowCameraModeConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	void UInputFollowCameraModeConfig::StaticRegisterNativesUInputFollowCameraModeConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputFollowCameraModeConfig);
	UClass* Z_Construct_UClass_UInputFollowCameraModeConfig_NoRegister()
	{
		return UInputFollowCameraModeConfig::StaticClass();
	}
	struct Z_Construct_UClass_UInputFollowCameraModeConfig_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAngleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawAngleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseYaw_MetaData[];
#endif
		static void NewProp_bUseYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePitch_MetaData[];
#endif
		static void NewProp_bUsePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAsInput_MetaData[];
#endif
		static void NewProp_bApplyAsInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAsInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawInputScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawInputScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchInputScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchInputScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDeadzone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputDeadzone;
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
	UObject* (*const Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModeConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UInputFollowCameraModeConfig\n *\n * A specialized camera mode configuration that drives camera behavior based on player input. \n * This mode typically makes the camera follow or align with input-driven orientation changes \n * (such as mouse movement, controller stick input, or touch gestures), providing responsive \n * player-controlled camera dynamics.\n *\n * Key Features:\n * - BlueprintType: Can be easily exposed and configured in Blueprints.\n * - EditInlineNew / DefaultToInstanced: Allows inline editing and instancing within \n *   higher-level camera assets (e.g., camera config maps or mode containers).\n * - Extends UCameraModeConfigBase: Integrates seamlessly with the Enhanced Camera System \n *   as a reusable and modular configuration unit.\n *\n * Typical Use:\n * Use this class to configure input-following camera behavior for third-person, first-person, \n * or hybrid setups where camera orientation and position should dynamically respond to player \n * input rather than being fixed or purely target-driven.\n */" },
		{ "IncludePath", "CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "UInputFollowCameraModeConfig\n\nA specialized camera mode configuration that drives camera behavior based on player input.\nThis mode typically makes the camera follow or align with input-driven orientation changes\n(such as mouse movement, controller stick input, or touch gestures), providing responsive\nplayer-controlled camera dynamics.\n\nKey Features:\n- BlueprintType: Can be easily exposed and configured in Blueprints.\n- EditInlineNew / DefaultToInstanced: Allows inline editing and instancing within\n  higher-level camera assets (e.g., camera config maps or mode containers).\n- Extends UCameraModeConfigBase: Integrates seamlessly with the Enhanced Camera System\n  as a reusable and modular configuration unit.\n\nTypical Use:\nUse this class to configure input-following camera behavior for third-person, first-person,\nor hybrid setups where camera orientation and position should dynamically respond to player\ninput rather than being fixed or purely target-driven." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Socket name to follow (optional). If empty, uses pawn actor location. */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Socket name to follow (optional). If empty, uses pawn actor location." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_FollowSocketName = { "FollowSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, FollowSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_FollowSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Offset from the socket/actor location applied to final camera position (local). */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Offset from the socket/actor location applied to final camera position (local)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PivotOffset_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PivotOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Target offset relative to the actor (used for look-at). */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Target offset relative to the actor (used for look-at)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, CameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_CameraOffset_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_CameraOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawAngleOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Additional yaw offset applied on top of calculated yaw (degrees). */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Additional yaw offset applied on top of calculated yaw (degrees)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawAngleOffset = { "YawAngleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, YawAngleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawAngleOffset_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawAngleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Whether to use last movement input to influence yaw */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Whether to use last movement input to influence yaw" },
	};
#endif
	void Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw_SetBit(void* Obj)
	{
		((UInputFollowCameraModeConfig*)Obj)->bUseYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw = { "bUseYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputFollowCameraModeConfig), &Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Whether to use control rotation / input to influence pitch */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Whether to use control rotation / input to influence pitch" },
	};
#endif
	void Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch_SetBit(void* Obj)
	{
		((UInputFollowCameraModeConfig*)Obj)->bUsePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch = { "bUsePitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputFollowCameraModeConfig), &Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolation speed for rotation (degrees/sec). Higher -> snappier (used when bApplyAsInput==false). */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Interpolation speed for rotation (degrees/sec). Higher -> snappier (used when bApplyAsInput==false)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_RotationInterpSpeed_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_RotationInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PositionInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolation speed for position (units/sec) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Interpolation speed for position (units/sec)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PositionInterpSpeed = { "PositionInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, PositionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PositionInterpSpeed_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PositionInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If true, apply desired yaw/pitch as incremental \"input\" deltas instead of setting rotation directly. */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "If true, apply desired yaw/pitch as incremental \"input\" deltas instead of setting rotation directly." },
	};
#endif
	void Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput_SetBit(void* Obj)
	{
		((UInputFollowCameraModeConfig*)Obj)->bApplyAsInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput = { "bApplyAsInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputFollowCameraModeConfig), &Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawInputScale_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Scale of yaw \"input\" when bApplyAsInput==true (degrees per second). */" },
		{ "EditCondition", "bApplyAsInput" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Scale of yaw \"input\" when bApplyAsInput==true (degrees per second)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawInputScale = { "YawInputScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, YawInputScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawInputScale_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawInputScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PitchInputScale_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Scale of pitch \"input\" when bApplyAsInput==true (degrees per second). */" },
		{ "EditCondition", "bApplyAsInput" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Scale of pitch \"input\" when bApplyAsInput==true (degrees per second)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PitchInputScale = { "PitchInputScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, PitchInputScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PitchInputScale_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PitchInputScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_InputDeadzone_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Deadzone for last movement input magnitude below which no input-following occurs */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Deadzone for last movement input magnitude below which no input-following occurs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_InputDeadzone = { "InputDeadzone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, InputDeadzone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_InputDeadzone_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_InputDeadzone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Post process override */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
		{ "ToolTip", "Post process override" },
	};
#endif
	void Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess_SetBit(void* Obj)
	{
		((UInputFollowCameraModeConfig*)Obj)->bApplyPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess = { "bApplyPostProcess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputFollowCameraModeConfig), &Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bApplyPostProcess" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/InputFollowCameraModeConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputFollowCameraModeConfig, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PostProcessSettings_MetaData) }; // 2922880151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_FollowSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_CameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawAngleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUseYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bUsePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PositionInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyAsInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_YawInputScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PitchInputScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_InputDeadzone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_bApplyPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputFollowCameraModeConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::ClassParams = {
		&UInputFollowCameraModeConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInputFollowCameraModeConfig()
	{
		if (!Z_Registration_Info_UClass_UInputFollowCameraModeConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputFollowCameraModeConfig.OuterSingleton, Z_Construct_UClass_UInputFollowCameraModeConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputFollowCameraModeConfig.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UClass* StaticClass<UInputFollowCameraModeConfig>()
	{
		return UInputFollowCameraModeConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputFollowCameraModeConfig);
	UInputFollowCameraModeConfig::~UInputFollowCameraModeConfig() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputFollowCameraModeConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputFollowCameraModeConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputFollowCameraModeConfig, UInputFollowCameraModeConfig::StaticClass, TEXT("UInputFollowCameraModeConfig"), &Z_Registration_Info_UClass_UInputFollowCameraModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputFollowCameraModeConfig), 4197186999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputFollowCameraModeConfig_h_631523549(TEXT("/Script/EnhancedCameraSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputFollowCameraModeConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_InputFollowCameraModeConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

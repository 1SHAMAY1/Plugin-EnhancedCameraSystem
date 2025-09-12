// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedCameraSystem/Public/CameraModeConfigs/CameraModeConfigBase.h"
#include "EnhancedCameraSystem/Public/EnhancedCameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModeConfigBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase();
	ENHANCEDCAMERASYSTEM_API UClass* Z_Construct_UClass_UCameraModeConfigBase_NoRegister();
	ENHANCEDCAMERASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTransformResult();
	UPackage* Z_Construct_UPackage__Script_EnhancedCameraSystem();
// End Cross Module References
	DEFINE_FUNCTION(UCameraModeConfigBase::execCalculateCamera)
	{
		P_GET_OBJECT(APawn,Z_Param_TargetPawn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentCameraLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CurrentCameraRotation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ControlRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCameraTransformResult*)Z_Param__Result=P_THIS->CalculateCamera_Implementation(Z_Param_TargetPawn,Z_Param_Out_CurrentCameraLocation,Z_Param_Out_CurrentCameraRotation,Z_Param_Out_ControlRotation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	struct CameraModeConfigBase_eventCalculateCamera_Parms
	{
		APawn* TargetPawn;
		FVector CurrentCameraLocation;
		FRotator CurrentCameraRotation;
		FRotator ControlRotation;
		float DeltaTime;
		FCameraTransformResult ReturnValue;
	};
	static FName NAME_UCameraModeConfigBase_CalculateCamera = FName(TEXT("CalculateCamera"));
	FCameraTransformResult UCameraModeConfigBase::CalculateCamera(APawn* TargetPawn, FVector const& CurrentCameraLocation, FRotator const& CurrentCameraRotation, FRotator const& ControlRotation, float DeltaTime) const
	{
		CameraModeConfigBase_eventCalculateCamera_Parms Parms;
		Parms.TargetPawn=TargetPawn;
		Parms.CurrentCameraLocation=CurrentCameraLocation;
		Parms.CurrentCameraRotation=CurrentCameraRotation;
		Parms.ControlRotation=ControlRotation;
		Parms.DeltaTime=DeltaTime;
		const_cast<UCameraModeConfigBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCameraModeConfigBase_CalculateCamera),&Parms);
		return Parms.ReturnValue;
	}
	void UCameraModeConfigBase::StaticRegisterNativesUCameraModeConfigBase()
	{
		UClass* Class = UCameraModeConfigBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateCamera", &UCameraModeConfigBase::execCalculateCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeConfigBase_eventCalculateCamera_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraLocation = { "CurrentCameraLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeConfigBase_eventCalculateCamera_Parms, CurrentCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraLocation_MetaData), Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraRotation = { "CurrentCameraRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeConfigBase_eventCalculateCamera_Parms, CurrentCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraRotation_MetaData), Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeConfigBase_eventCalculateCamera_Parms, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ControlRotation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeConfigBase_eventCalculateCamera_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModeConfigBase_eventCalculateCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FCameraTransformResult, METADATA_PARAMS(0, nullptr) }; // 916294995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_TargetPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_CurrentCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n     * Compute the camera transform for this mode.\n     * Added ControlRotation so the data asset can respect player input.\n     * BlueprintNativeEvent so you can override in BP DataAsset.\n     */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "Compute the camera transform for this mode.\nAdded ControlRotation so the data asset can respect player input.\nBlueprintNativeEvent so you can override in BP DataAsset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModeConfigBase, nullptr, "CalculateCamera", nullptr, nullptr, Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::PropPointers), sizeof(CameraModeConfigBase_eventCalculateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(CameraModeConfigBase_eventCalculateCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraModeConfigBase);
	UClass* Z_Construct_UClass_UCameraModeConfigBase_NoRegister()
	{
		return UCameraModeConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModeConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSafeCollisionUpdate_MetaData[];
#endif
		static void NewProp_bEnableSafeCollisionUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSafeCollisionUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCollisionProbeSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraCollisionProbeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCollisionInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraCollisionInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoomLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBoomLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModeFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLag_MetaData[];
#endif
		static void NewProp_bEnableLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampPitch_MetaData[];
#endif
		static void NewProp_bClampPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampYaw_MetaData[];
#endif
		static void NewProp_bClampYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampRoll_MetaData[];
#endif
		static void NewProp_bClampRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModeConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedCameraSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraModeConfigBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraModeConfigBase_CalculateCamera, "CalculateCamera" }, // 3439569506
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Per-mode camera configuration as a UObject.\n * BlueprintNativeEvent CalculateCamera allows overriding in BP subclass of the DataAsset.\n */" },
		{ "IncludePath", "CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "Per-mode camera configuration as a UObject.\nBlueprintNativeEvent CalculateCamera allows overriding in BP subclass of the DataAsset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	void Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate_SetBit(void* Obj)
	{
		((UCameraModeConfigBase*)Obj)->bEnableSafeCollisionUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate = { "bEnableSafeCollisionUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraModeConfigBase), &Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionProbeSize_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionProbeSize = { "CameraCollisionProbeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, CameraCollisionProbeSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionProbeSize_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionProbeSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionInterpSpeed = { "CameraCollisionInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, CameraCollisionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionInterpSpeed_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraBoomLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Target arm length (spring-arm style). If > 0 we place the camera behind target along Rotation vector */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "Target arm length (spring-arm style). If > 0 we place the camera behind target along Rotation vector" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraBoomLength = { "CameraBoomLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, CameraBoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraBoomLength_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraBoomLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_TransitionDuration_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Blend duration when entering this mode (seconds) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "Blend duration when entering this mode (seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, TransitionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_TransitionDuration_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_TransitionDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_ModeFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** FOV for this mode. If <= 0, camera manager default is used */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "FOV for this mode. If <= 0, camera manager default is used" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_ModeFOV = { "ModeFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, ModeFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_ModeFOV_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_ModeFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Enable positional lag (smooth follow) */" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "Enable positional lag (smooth follow)" },
	};
#endif
	void Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag_SetBit(void* Obj)
	{
		((UCameraModeConfigBase*)Obj)->bEnableLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag = { "bEnableLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraModeConfigBase), &Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_LagSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** How quickly camera snaps to target when lag is enabled */" },
		{ "EditCondition", "bEnableLag" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
		{ "ToolTip", "How quickly camera snaps to target when lag is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_LagSpeed = { "LagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, LagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_LagSpeed_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_LagSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	void Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch_SetBit(void* Obj)
	{
		((UCameraModeConfigBase*)Obj)->bClampPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch = { "bClampPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraModeConfigBase), &Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_PitchClamp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bClampPitch" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_PitchClamp = { "PitchClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, PitchClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_PitchClamp_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_PitchClamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	void Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw_SetBit(void* Obj)
	{
		((UCameraModeConfigBase*)Obj)->bClampYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw = { "bClampYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraModeConfigBase), &Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_YawClamp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bClampYaw" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_YawClamp = { "YawClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, YawClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_YawClamp_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_YawClamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	void Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll_SetBit(void* Obj)
	{
		((UCameraModeConfigBase*)Obj)->bClampRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll = { "bClampRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraModeConfigBase), &Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_RollClamp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditCondition", "bClampRoll" },
		{ "ModuleRelativePath", "Public/CameraModeConfigs/CameraModeConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_RollClamp = { "RollClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModeConfigBase, RollClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_RollClamp_MetaData), Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_RollClamp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModeConfigBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableSafeCollisionUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionProbeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraCollisionInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_CameraBoomLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_TransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_ModeFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bEnableLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_LagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_PitchClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_YawClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_bClampRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModeConfigBase_Statics::NewProp_RollClamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModeConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModeConfigBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraModeConfigBase_Statics::ClassParams = {
		&UCameraModeConfigBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraModeConfigBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::PropPointers),
		0,
		0x002010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraModeConfigBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModeConfigBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCameraModeConfigBase()
	{
		if (!Z_Registration_Info_UClass_UCameraModeConfigBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraModeConfigBase.OuterSingleton, Z_Construct_UClass_UCameraModeConfigBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraModeConfigBase.OuterSingleton;
	}
	template<> ENHANCEDCAMERASYSTEM_API UClass* StaticClass<UCameraModeConfigBase>()
	{
		return UCameraModeConfigBase::StaticClass();
	}
	UCameraModeConfigBase::UCameraModeConfigBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModeConfigBase);
	UCameraModeConfigBase::~UCameraModeConfigBase() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_CameraModeConfigBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_CameraModeConfigBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraModeConfigBase, UCameraModeConfigBase::StaticClass, TEXT("UCameraModeConfigBase"), &Z_Registration_Info_UClass_UCameraModeConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraModeConfigBase), 623668040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_CameraModeConfigBase_h_882802158(TEXT("/Script/EnhancedCameraSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_CameraModeConfigBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InvProject_Builds_EnhancedCameraSystem_HostProject_Plugins_EnhancedCameraSystem_Source_EnhancedCameraSystem_Public_CameraModeConfigs_CameraModeConfigBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

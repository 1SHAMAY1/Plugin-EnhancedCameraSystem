#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"
#include "Engine/EngineTypes.h"
#include "Engine/Scene.h"
#include "EnhancedCameraTypes.generated.h"

/** Result returned by camera mode CalculateCamera */
USTRUCT(BlueprintType)
struct FCameraTransformResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Camera")
	FVector Location = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category="Camera")
	FRotator Rotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadWrite, Category="Camera")
	float FOV = 90.f;

	UPROPERTY(BlueprintReadWrite, Category="Camera")
	bool bHasPostProcess = false;

	UPROPERTY(BlueprintReadWrite, Category="Camera")
	FPostProcessSettings PostProcessSettings;
};

namespace EnhancedCameraGameplayTags
{
	ENHANCEDCAMERASYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Mode_FPP);
	ENHANCEDCAMERASYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Mode_TPP);
	ENHANCEDCAMERASYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Mode_TDP);
	ENHANCEDCAMERASYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Mode_InputToDistanceCurve);
	ENHANCEDCAMERASYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Mode_InputFollowCamera);
}

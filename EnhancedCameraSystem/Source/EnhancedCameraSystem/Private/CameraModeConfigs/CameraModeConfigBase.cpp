#include "CameraModeConfigs/CameraModeConfigBase.h"

#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/MeshComponent.h"
#include "Engine/EngineTypes.h"

FCameraTransformResult UCameraModeConfigBase::CalculateCamera_Implementation(
    APawn* TargetPawn,
    const FVector& CurrentCameraLocation,
    const FRotator& CurrentCameraRotation,
    const FRotator& ControlRotation,
    float DeltaTime) const
{
    return FCameraTransformResult();
}


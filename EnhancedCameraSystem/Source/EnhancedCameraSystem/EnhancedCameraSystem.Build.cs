using UnrealBuildTool;
using System.Collections.Generic;

public class EnhancedCameraSystem : ModuleRules
{
    public EnhancedCameraSystem(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Public dependencies other modules may need when including our headers
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "GameplayTags"
            }
        );

        // Private dependencies used only in implementation
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "RenderCore",
                "RHI"
            }
        );
        
    }
}

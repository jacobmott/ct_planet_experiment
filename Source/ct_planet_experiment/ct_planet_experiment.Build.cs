// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ct_planet_experiment : ModuleRules
{
	public ct_planet_experiment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

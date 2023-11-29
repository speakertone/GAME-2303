// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Week12_Trajectory : ModuleRules
{
	public Week12_Trajectory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Week10_LookAt : ModuleRules
{
	public Week10_LookAt(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

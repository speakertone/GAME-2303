// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Week11_Reflect : ModuleRules
{
	public Week11_Reflect(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

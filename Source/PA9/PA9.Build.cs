// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PA9 : ModuleRules
{
	public PA9(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

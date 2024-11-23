// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class The_Settler_Path : ModuleRules
{
	public The_Settler_Path(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

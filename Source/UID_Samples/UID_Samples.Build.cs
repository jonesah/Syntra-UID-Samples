// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UID_Samples : ModuleRules
{
	public UID_Samples(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

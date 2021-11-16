// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test1611 : ModuleRules
{
	public Test1611(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

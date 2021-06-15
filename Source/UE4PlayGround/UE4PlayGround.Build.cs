// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4PlayGround : ModuleRules
{
	public UE4PlayGround(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

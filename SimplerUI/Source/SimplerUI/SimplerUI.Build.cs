// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimplerUI : ModuleRules
{
	public SimplerUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
	
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine", 
				"InputCore",
				"Projects", 
				"UMG"
			}
			);
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				
				"UMG"
			}
		);			
		
		
	}
}

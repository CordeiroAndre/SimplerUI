// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplerUI_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimplerUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimplerUI()
	{
		if (!Z_Registration_Info_UPackage__Script_SimplerUI.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimplerUI",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6FF1544D,
				0x32333575,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimplerUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimplerUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimplerUI(Z_Construct_UPackage__Script_SimplerUI, TEXT("/Script/SimplerUI"), Z_Registration_Info_UPackage__Script_SimplerUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6FF1544D, 0x32333575));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

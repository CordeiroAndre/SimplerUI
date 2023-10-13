// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplerUI/Public/HUD/SimplerActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplerActivatableWidget() {}
// Cross Module References
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerActivatableWidget_NoRegister();
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerActivatableWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimplerUI();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void USimplerActivatableWidget::StaticRegisterNativesUSimplerActivatableWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplerActivatableWidget);
	UClass* Z_Construct_UClass_USimplerActivatableWidget_NoRegister()
	{
		return USimplerActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_USimplerActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivationAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeactivationAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplerActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplerUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerActivatableWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  \n */" },
		{ "IncludePath", "HUD/SimplerActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/SimplerActivatableWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_ActivationAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "SimplerActivatableWidget" },
		{ "ModuleRelativePath", "Public/HUD/SimplerActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_ActivationAnim = { "ActivationAnim", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplerActivatableWidget, ActivationAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_ActivationAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_ActivationAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_DeactivationAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "SimplerActivatableWidget" },
		{ "ModuleRelativePath", "Public/HUD/SimplerActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_DeactivationAnim = { "DeactivationAnim", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplerActivatableWidget, DeactivationAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_DeactivationAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_DeactivationAnim_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplerActivatableWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_ActivationAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplerActivatableWidget_Statics::NewProp_DeactivationAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplerActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplerActivatableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplerActivatableWidget_Statics::ClassParams = {
		&USimplerActivatableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplerActivatableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplerActivatableWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimplerActivatableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerActivatableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplerActivatableWidget()
	{
		if (!Z_Registration_Info_UClass_USimplerActivatableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplerActivatableWidget.OuterSingleton, Z_Construct_UClass_USimplerActivatableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimplerActivatableWidget.OuterSingleton;
	}
	template<> SIMPLERUI_API UClass* StaticClass<USimplerActivatableWidget>()
	{
		return USimplerActivatableWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplerActivatableWidget);
	struct Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerActivatableWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerActivatableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimplerActivatableWidget, USimplerActivatableWidget::StaticClass, TEXT("USimplerActivatableWidget"), &Z_Registration_Info_UClass_USimplerActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplerActivatableWidget), 3543427056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerActivatableWidget_h_3732207070(TEXT("/Script/SimplerUI"),
		Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerActivatableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

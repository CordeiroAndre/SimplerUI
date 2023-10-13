// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplerUI/Public/HUD/SimplerBaseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplerBaseWidget() {}
// Cross Module References
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerBaseWidget_NoRegister();
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerBaseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimplerUI();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerActivatableWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USimplerBaseWidget::execRemovePrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePrompt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimplerBaseWidget::execRemoveWidgetFromBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidgetFromBase();
		P_NATIVE_END;
	}
	void USimplerBaseWidget::StaticRegisterNativesUSimplerBaseWidget()
	{
		UClass* Class = USimplerBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemovePrompt", &USimplerBaseWidget::execRemovePrompt },
			{ "RemoveWidgetFromBase", &USimplerBaseWidget::execRemoveWidgetFromBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplerBaseWidget, nullptr, "RemovePrompt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplerBaseWidget, nullptr, "RemoveWidgetFromBase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplerBaseWidget);
	UClass* Z_Construct_UClass_USimplerBaseWidget_NoRegister()
	{
		return USimplerBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USimplerBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BasePanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__baseWidgetToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__baseWidgetToActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__promptWidgetToActivate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__promptWidgetToActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplerBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplerUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimplerBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimplerBaseWidget_RemovePrompt, "RemovePrompt" }, // 1878658960
		{ &Z_Construct_UFunction_USimplerBaseWidget_RemoveWidgetFromBase, "RemoveWidgetFromBase" }, // 4193778822
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/SimplerBaseWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_BasePanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_BasePanel = { "BasePanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplerBaseWidget, BasePanel), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_BasePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_BasePanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_PromptPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_PromptPanel = { "PromptPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplerBaseWidget, PromptPanel), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_PromptPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_PromptPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__baseWidgetToActivate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__baseWidgetToActivate = { "_baseWidgetToActivate", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplerBaseWidget, _baseWidgetToActivate), Z_Construct_UClass_USimplerActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__baseWidgetToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__baseWidgetToActivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__promptWidgetToActivate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SimplerBaseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__promptWidgetToActivate = { "_promptWidgetToActivate", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimplerBaseWidget, _promptWidgetToActivate), Z_Construct_UClass_USimplerActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__promptWidgetToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__promptWidgetToActivate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplerBaseWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_BasePanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp_PromptPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__baseWidgetToActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplerBaseWidget_Statics::NewProp__promptWidgetToActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplerBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplerBaseWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplerBaseWidget_Statics::ClassParams = {
		&USimplerBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimplerBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplerBaseWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimplerBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplerBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplerBaseWidget()
	{
		if (!Z_Registration_Info_UClass_USimplerBaseWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplerBaseWidget.OuterSingleton, Z_Construct_UClass_USimplerBaseWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimplerBaseWidget.OuterSingleton;
	}
	template<> SIMPLERUI_API UClass* StaticClass<USimplerBaseWidget>()
	{
		return USimplerBaseWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplerBaseWidget);
	struct Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerBaseWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerBaseWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimplerBaseWidget, USimplerBaseWidget::StaticClass, TEXT("USimplerBaseWidget"), &Z_Registration_Info_UClass_USimplerBaseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplerBaseWidget), 1946395696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerBaseWidget_h_4066033724(TEXT("/Script/SimplerUI"),
		Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerBaseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_SimplerBaseWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

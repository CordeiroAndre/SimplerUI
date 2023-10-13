// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplerUI/Public/HUD/HUDSimplerUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDSimplerUI() {}
// Cross Module References
	SIMPLERUI_API UClass* Z_Construct_UClass_AHUDSimplerUI_NoRegister();
	SIMPLERUI_API UClass* Z_Construct_UClass_AHUDSimplerUI();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SimplerUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerActivatableWidget_NoRegister();
	SIMPLERUI_API UClass* Z_Construct_UClass_USimplerBaseWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHUDSimplerUI::execPushPrompt)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimplerActivatableWidget**)Z_Param__Result=P_THIS->PushPrompt(Z_Param_WidgetToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUDSimplerUI::execPushBase)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimplerActivatableWidget**)Z_Param__Result=P_THIS->PushBase(Z_Param_WidgetToAdd);
		P_NATIVE_END;
	}
	void AHUDSimplerUI::StaticRegisterNativesAHUDSimplerUI()
	{
		UClass* Class = AHUDSimplerUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PushBase", &AHUDSimplerUI::execPushBase },
			{ "PushPrompt", &AHUDSimplerUI::execPushPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics
	{
		struct HUDSimplerUI_eventPushBase_Parms
		{
			TSubclassOf<USimplerActivatableWidget>  WidgetToAdd;
			USimplerActivatableWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_WidgetToAdd = { "WidgetToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDSimplerUI_eventPushBase_Parms, WidgetToAdd), Z_Construct_UClass_USimplerActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDSimplerUI_eventPushBase_Parms, ReturnValue), Z_Construct_UClass_USimplerActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_WidgetToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplerUI | HUD" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUDSimplerUI, nullptr, "PushBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::HUDSimplerUI_eventPushBase_Parms), Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUDSimplerUI_PushBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUDSimplerUI_PushBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics
	{
		struct HUDSimplerUI_eventPushPrompt_Parms
		{
			TSubclassOf<USimplerActivatableWidget>  WidgetToAdd;
			USimplerActivatableWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_WidgetToAdd = { "WidgetToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDSimplerUI_eventPushPrompt_Parms, WidgetToAdd), Z_Construct_UClass_USimplerActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDSimplerUI_eventPushPrompt_Parms, ReturnValue), Z_Construct_UClass_USimplerActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_WidgetToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplerUI | HUD" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUDSimplerUI, nullptr, "PushPrompt", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::HUDSimplerUI_eventPushPrompt_Parms), Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUDSimplerUI_PushPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUDSimplerUI_PushPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHUDSimplerUI);
	UClass* Z_Construct_UClass_AHUDSimplerUI_NoRegister()
	{
		return AHUDSimplerUI::StaticClass();
	}
	struct Z_Construct_UClass_AHUDSimplerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseStack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PromptStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__baseWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__baseWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUDSimplerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SimplerUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHUDSimplerUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHUDSimplerUI_PushBase, "PushBase" }, // 1911184270
		{ &Z_Construct_UFunction_AHUDSimplerUI_PushPrompt, "PushPrompt" }, // 830236117
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDSimplerUI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/HUDSimplerUI.h" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseWidget_MetaData[] = {
		{ "Category", "Simpler" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseWidget = { "BaseWidget", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUDSimplerUI, BaseWidget), Z_Construct_UClass_USimplerBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack_Inner = { "BaseStack", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimplerActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack_MetaData[] = {
		{ "Category", "Simpler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack = { "BaseStack", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUDSimplerUI, BaseStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack_Inner = { "PromptStack", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USimplerActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack_MetaData[] = {
		{ "Category", "Simpler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack = { "PromptStack", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUDSimplerUI, PromptStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp__baseWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/HUDSimplerUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp__baseWidget = { "_baseWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUDSimplerUI, _baseWidget), Z_Construct_UClass_USimplerBaseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp__baseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp__baseWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUDSimplerUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_BaseStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp_PromptStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUDSimplerUI_Statics::NewProp__baseWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUDSimplerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUDSimplerUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUDSimplerUI_Statics::ClassParams = {
		&AHUDSimplerUI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHUDSimplerUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHUDSimplerUI_Statics::PropPointers),
		0,
		0x009002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AHUDSimplerUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDSimplerUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUDSimplerUI()
	{
		if (!Z_Registration_Info_UClass_AHUDSimplerUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHUDSimplerUI.OuterSingleton, Z_Construct_UClass_AHUDSimplerUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHUDSimplerUI.OuterSingleton;
	}
	template<> SIMPLERUI_API UClass* StaticClass<AHUDSimplerUI>()
	{
		return AHUDSimplerUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUDSimplerUI);
	struct Z_CompiledInDeferFile_FID_HistoricalFigures_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HistoricalFigures_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHUDSimplerUI, AHUDSimplerUI::StaticClass, TEXT("AHUDSimplerUI"), &Z_Registration_Info_UClass_AHUDSimplerUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUDSimplerUI), 3723058156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HistoricalFigures_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_2981523641(TEXT("/Script/SimplerUI"),
		Z_CompiledInDeferFile_FID_HistoricalFigures_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HistoricalFigures_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

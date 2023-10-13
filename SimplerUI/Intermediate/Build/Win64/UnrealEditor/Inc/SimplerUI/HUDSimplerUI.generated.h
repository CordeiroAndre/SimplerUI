// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USimplerActivatableWidget;
#ifdef SIMPLERUI_HUDSimplerUI_generated_h
#error "HUDSimplerUI.generated.h already included, missing '#pragma once' in HUDSimplerUI.h"
#endif
#define SIMPLERUI_HUDSimplerUI_generated_h

#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_SPARSE_DATA
#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPopPrompt); \
	DECLARE_FUNCTION(execPushPrompt); \
	DECLARE_FUNCTION(execPushBase);


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPopPrompt); \
	DECLARE_FUNCTION(execPushPrompt); \
	DECLARE_FUNCTION(execPushBase);


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUDSimplerUI(); \
	friend struct Z_Construct_UClass_AHUDSimplerUI_Statics; \
public: \
	DECLARE_CLASS(AHUDSimplerUI, AHUD, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimplerUI"), NO_API) \
	DECLARE_SERIALIZER(AHUDSimplerUI)


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHUDSimplerUI(); \
	friend struct Z_Construct_UClass_AHUDSimplerUI_Statics; \
public: \
	DECLARE_CLASS(AHUDSimplerUI, AHUD, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimplerUI"), NO_API) \
	DECLARE_SERIALIZER(AHUDSimplerUI)


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUDSimplerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUDSimplerUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUDSimplerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUDSimplerUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUDSimplerUI(AHUDSimplerUI&&); \
	NO_API AHUDSimplerUI(const AHUDSimplerUI&); \
public:


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUDSimplerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUDSimplerUI(AHUDSimplerUI&&); \
	NO_API AHUDSimplerUI(const AHUDSimplerUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUDSimplerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUDSimplerUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUDSimplerUI)


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_11_PROLOG
#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_SPARSE_DATA \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_RPC_WRAPPERS \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_INCLASS \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_SPARSE_DATA \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_INCLASS_NO_PURE_DECLS \
	FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLERUI_API UClass* StaticClass<class AHUDSimplerUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RageOverTheMachines_Plugins_SimplerUI_Source_SimplerUI_Public_HUD_HUDSimplerUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

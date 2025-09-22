// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridSettings.h"

#ifdef SUNFLOWERFIELDPROTO_GridSettings_generated_h
#error "GridSettings.generated.h already included, missing '#pragma once' in GridSettings.h"
#endif
#define SUNFLOWERFIELDPROTO_GridSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGridSettings ************************************************************
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridSettings_NoRegister();

#define FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridSettings(); \
	friend struct Z_Construct_UClass_UGridSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SunflowerFieldProto"), Z_Construct_UClass_UGridSettings_NoRegister) \
	DECLARE_SERIALIZER(UGridSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridSettings(UGridSettings&&) = delete; \
	UGridSettings(const UGridSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSettings) \
	NO_API virtual ~UGridSettings();


#define FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h_12_PROLOG
#define FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridSettings;

// ********** End Class UGridSettings **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

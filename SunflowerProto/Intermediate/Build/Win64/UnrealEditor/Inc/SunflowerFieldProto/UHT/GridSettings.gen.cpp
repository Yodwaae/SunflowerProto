// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridSettings();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SunflowerFieldProto();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGridSettings ************************************************************
void UGridSettings::StaticRegisterNativesUGridSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridSettings;
UClass* UGridSettings::GetPrivateStaticClass()
{
	using TClass = UGridSettings;
	if (!Z_Registration_Info_UClass_UGridSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridSettings"),
			Z_Registration_Info_UClass_UGridSettings.InnerSingleton,
			StaticRegisterNativesUGridSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGridSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridSettings_NoRegister()
{
	return UGridSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GridSettings.h" },
		{ "ModuleRelativePath", "Public/GridSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cell Size used by tetro pieces and playing grid\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cell Size used by tetro pieces and playing grid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSettings_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSettings, CellSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSettings_Statics::NewProp_CellSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SunflowerFieldProto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSettings_Statics::ClassParams = {
	&UGridSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridSettings()
{
	if (!Z_Registration_Info_UClass_UGridSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSettings.OuterSingleton, Z_Construct_UClass_UGridSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridSettings.OuterSingleton;
}
UGridSettings::UGridSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSettings);
UGridSettings::~UGridSettings() {}
// ********** End Class UGridSettings **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h__Script_SunflowerFieldProto_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridSettings, UGridSettings::StaticClass, TEXT("UGridSettings"), &Z_Registration_Info_UClass_UGridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSettings), 361737581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h__Script_SunflowerFieldProto_1342208454(TEXT("/Script/SunflowerFieldProto"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h__Script_SunflowerFieldProto_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridSettings_h__Script_SunflowerFieldProto_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

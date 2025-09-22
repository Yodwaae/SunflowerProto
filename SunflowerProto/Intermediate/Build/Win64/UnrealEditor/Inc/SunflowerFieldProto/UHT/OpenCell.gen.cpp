// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCell.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOpenCell() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridCell();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UOpenCell();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UOpenCell_NoRegister();
UPackage* Z_Construct_UPackage__Script_SunflowerFieldProto();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOpenCell ****************************************************************
void UOpenCell::StaticRegisterNativesUOpenCell()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOpenCell;
UClass* UOpenCell::GetPrivateStaticClass()
{
	using TClass = UOpenCell;
	if (!Z_Registration_Info_UClass_UOpenCell.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OpenCell"),
			Z_Registration_Info_UClass_UOpenCell.InnerSingleton,
			StaticRegisterNativesUOpenCell,
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
	return Z_Registration_Info_UClass_UOpenCell.InnerSingleton;
}
UClass* Z_Construct_UClass_UOpenCell_NoRegister()
{
	return UOpenCell::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOpenCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OpenCell.h" },
		{ "ModuleRelativePath", "Public/OpenCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "OpenCell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OpenCell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenCell_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenCell, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenCell_Statics::NewProp_TriggerBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOpenCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGridCell,
	(UObject* (*)())Z_Construct_UPackage__Script_SunflowerFieldProto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenCell_Statics::ClassParams = {
	&UOpenCell::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOpenCell_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCell_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOpenCell()
{
	if (!Z_Registration_Info_UClass_UOpenCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenCell.OuterSingleton, Z_Construct_UClass_UOpenCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOpenCell.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenCell);
UOpenCell::~UOpenCell() {}
// ********** End Class UOpenCell ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_OpenCell_h__Script_SunflowerFieldProto_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOpenCell, UOpenCell::StaticClass, TEXT("UOpenCell"), &Z_Registration_Info_UClass_UOpenCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenCell), 1791760604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_OpenCell_h__Script_SunflowerFieldProto_3809654907(TEXT("/Script/SunflowerFieldProto"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_OpenCell_h__Script_SunflowerFieldProto_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_OpenCell_h__Script_SunflowerFieldProto_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

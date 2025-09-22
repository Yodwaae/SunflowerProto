// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridCell.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridCell() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridCell();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridCell_NoRegister();
UPackage* Z_Construct_UPackage__Script_SunflowerFieldProto();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGridCell ****************************************************************
void UGridCell::StaticRegisterNativesUGridCell()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridCell;
UClass* UGridCell::GetPrivateStaticClass()
{
	using TClass = UGridCell;
	if (!Z_Registration_Info_UClass_UGridCell.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridCell"),
			Z_Registration_Info_UClass_UGridCell.InnerSingleton,
			StaticRegisterNativesUGridCell,
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
	return Z_Registration_Info_UClass_UGridCell.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridCell_NoRegister()
{
	return UGridCell::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GridCell.h" },
		{ "ModuleRelativePath", "Public/GridCell.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SunflowerFieldProto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridCell_Statics::ClassParams = {
	&UGridCell::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridCell()
{
	if (!Z_Registration_Info_UClass_UGridCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridCell.OuterSingleton, Z_Construct_UClass_UGridCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridCell.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridCell);
UGridCell::~UGridCell() {}
// ********** End Class UGridCell ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridCell_h__Script_SunflowerFieldProto_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridCell, UGridCell::StaticClass, TEXT("UGridCell"), &Z_Registration_Info_UClass_UGridCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridCell), 780980869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridCell_h__Script_SunflowerFieldProto_3639074540(TEXT("/Script/SunflowerFieldProto"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridCell_h__Script_SunflowerFieldProto_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_GridCell_h__Script_SunflowerFieldProto_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

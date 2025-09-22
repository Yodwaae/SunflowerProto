// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClosedCell.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClosedCell() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UClosedCell();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UClosedCell_NoRegister();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_UGridCell();
UPackage* Z_Construct_UPackage__Script_SunflowerFieldProto();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UClosedCell **************************************************************
void UClosedCell::StaticRegisterNativesUClosedCell()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UClosedCell;
UClass* UClosedCell::GetPrivateStaticClass()
{
	using TClass = UClosedCell;
	if (!Z_Registration_Info_UClass_UClosedCell.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ClosedCell"),
			Z_Registration_Info_UClass_UClosedCell.InnerSingleton,
			StaticRegisterNativesUClosedCell,
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
	return Z_Registration_Info_UClass_UClosedCell.InnerSingleton;
}
UClass* Z_Construct_UClass_UClosedCell_NoRegister()
{
	return UClosedCell::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UClosedCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ClosedCell.h" },
		{ "ModuleRelativePath", "Public/ClosedCell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ClosedCell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClosedCell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClosedCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClosedCell_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClosedCell, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClosedCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClosedCell_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClosedCell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClosedCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGridCell,
	(UObject* (*)())Z_Construct_UPackage__Script_SunflowerFieldProto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClosedCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClosedCell_Statics::ClassParams = {
	&UClosedCell::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClosedCell_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClosedCell_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClosedCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UClosedCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClosedCell()
{
	if (!Z_Registration_Info_UClass_UClosedCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClosedCell.OuterSingleton, Z_Construct_UClass_UClosedCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClosedCell.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClosedCell);
UClosedCell::~UClosedCell() {}
// ********** End Class UClosedCell ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_ClosedCell_h__Script_SunflowerFieldProto_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClosedCell, UClosedCell::StaticClass, TEXT("UClosedCell"), &Z_Registration_Info_UClass_UClosedCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClosedCell), 828741905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_ClosedCell_h__Script_SunflowerFieldProto_1789334196(TEXT("/Script/SunflowerFieldProto"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_ClosedCell_h__Script_SunflowerFieldProto_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_SunflowerProto_SunflowerProto_Source_SunflowerFieldProto_Public_ClosedCell_h__Script_SunflowerFieldProto_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

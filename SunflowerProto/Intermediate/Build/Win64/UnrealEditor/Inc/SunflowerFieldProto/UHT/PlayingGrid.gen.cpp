// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayingGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayingGrid() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_APlayingGrid();
SUNFLOWERFIELDPROTO_API UClass* Z_Construct_UClass_APlayingGrid_NoRegister();
UPackage* Z_Construct_UPackage__Script_SunflowerFieldProto();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayingGrid *************************************************************
void APlayingGrid::StaticRegisterNativesAPlayingGrid()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayingGrid;
UClass* APlayingGrid::GetPrivateStaticClass()
{
	using TClass = APlayingGrid;
	if (!Z_Registration_Info_UClass_APlayingGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayingGrid"),
			Z_Registration_Info_UClass_APlayingGrid.InnerSingleton,
			StaticRegisterNativesAPlayingGrid,
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
	return Z_Registration_Info_UClass_APlayingGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayingGrid_NoRegister()
{
	return APlayingGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayingGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayingGrid.h" },
		{ "ModuleRelativePath", "Public/PlayingGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isEven_MetaData[] = {
		{ "Category", "PlayingGrid" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayingGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gridWidth_MetaData[] = {
		{ "Category", "PlayingGrid" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayingGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gridHeight_MetaData[] = {
		{ "Category", "PlayingGrid" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayingGrid.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isEven_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isEven;
	static const UECodeGen_Private::FIntPropertyParams NewProp_gridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_gridHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayingGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APlayingGrid_Statics::NewProp_isEven_SetBit(void* Obj)
{
	((APlayingGrid*)Obj)->isEven = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayingGrid_Statics::NewProp_isEven = { "isEven", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayingGrid), &Z_Construct_UClass_APlayingGrid_Statics::NewProp_isEven_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isEven_MetaData), NewProp_isEven_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayingGrid_Statics::NewProp_gridWidth = { "gridWidth", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayingGrid, gridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gridWidth_MetaData), NewProp_gridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayingGrid_Statics::NewProp_gridHeight = { "gridHeight", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayingGrid, gridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gridHeight_MetaData), NewProp_gridHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayingGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayingGrid_Statics::NewProp_isEven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayingGrid_Statics::NewProp_gridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayingGrid_Statics::NewProp_gridHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayingGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayingGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SunflowerFieldProto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayingGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayingGrid_Statics::ClassParams = {
	&APlayingGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayingGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayingGrid_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayingGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayingGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayingGrid()
{
	if (!Z_Registration_Info_UClass_APlayingGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayingGrid.OuterSingleton, Z_Construct_UClass_APlayingGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayingGrid.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayingGrid);
APlayingGrid::~APlayingGrid() {}
// ********** End Class APlayingGrid ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SunflowerProto_Source_SunflowerFieldProto_Public_PlayingGrid_h__Script_SunflowerFieldProto_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayingGrid, APlayingGrid::StaticClass, TEXT("APlayingGrid"), &Z_Registration_Info_UClass_APlayingGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayingGrid), 1386602543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SunflowerProto_Source_SunflowerFieldProto_Public_PlayingGrid_h__Script_SunflowerFieldProto_3119254594(TEXT("/Script/SunflowerFieldProto"),
	Z_CompiledInDeferFile_FID_SunflowerProto_Source_SunflowerFieldProto_Public_PlayingGrid_h__Script_SunflowerFieldProto_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SunflowerProto_Source_SunflowerFieldProto_Public_PlayingGrid_h__Script_SunflowerFieldProto_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

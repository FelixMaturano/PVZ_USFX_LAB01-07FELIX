// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/GrillaPasto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrillaPasto() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrillaPasto_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrillaPasto();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrilla();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AGrillaPasto::StaticRegisterNativesAGrillaPasto()
	{
	}
	UClass* Z_Construct_UClass_AGrillaPasto_NoRegister()
	{
		return AGrillaPasto::StaticClass();
	}
	struct Z_Construct_UClass_AGrillaPasto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrillaPasto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrilla,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrillaPasto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GrillaPasto.h" },
		{ "ModuleRelativePath", "GrillaPasto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrillaPasto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrillaPasto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrillaPasto_Statics::ClassParams = {
		&AGrillaPasto::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrillaPasto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrillaPasto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrillaPasto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrillaPasto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrillaPasto, 2198749951);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AGrillaPasto>()
	{
		return AGrillaPasto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrillaPasto(Z_Construct_UClass_AGrillaPasto, &AGrillaPasto::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AGrillaPasto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrillaPasto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

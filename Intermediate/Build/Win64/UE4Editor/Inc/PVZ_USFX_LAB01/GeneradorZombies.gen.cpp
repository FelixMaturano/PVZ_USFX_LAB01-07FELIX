// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Patterns/FactoryMethod/GeneradorZombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorZombies() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGeneradorZombies_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGeneradorZombies();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AGeneradorZombies::StaticRegisterNativesAGeneradorZombies()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorZombies_NoRegister()
	{
		return AGeneradorZombies::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorZombies_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Patterns/FactoryMethod/GeneradorZombies.h" },
		{ "ModuleRelativePath", "Patterns/FactoryMethod/GeneradorZombies.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorZombies_Statics::ClassParams = {
		&AGeneradorZombies::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorZombies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorZombies, 1994175942);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AGeneradorZombies>()
	{
		return AGeneradorZombies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorZombies(Z_Construct_UClass_AGeneradorZombies, &AGeneradorZombies::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AGeneradorZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

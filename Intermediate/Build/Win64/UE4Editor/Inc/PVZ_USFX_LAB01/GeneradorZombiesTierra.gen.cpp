// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Patterns/FactoryMethod/GeneradorZombiesTierra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorZombiesTierra() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGeneradorZombiesTierra_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGeneradorZombiesTierra();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGeneradorZombies();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AGeneradorZombiesTierra::StaticRegisterNativesAGeneradorZombiesTierra()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorZombiesTierra_NoRegister()
	{
		return AGeneradorZombiesTierra::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorZombiesTierra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorZombiesTierra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorZombiesTierra_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Patterns/FactoryMethod/GeneradorZombiesTierra.h" },
		{ "ModuleRelativePath", "Patterns/FactoryMethod/GeneradorZombiesTierra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorZombiesTierra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorZombiesTierra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorZombiesTierra_Statics::ClassParams = {
		&AGeneradorZombiesTierra::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorZombiesTierra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorZombiesTierra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorZombiesTierra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorZombiesTierra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorZombiesTierra, 4243242650);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AGeneradorZombiesTierra>()
	{
		return AGeneradorZombiesTierra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorZombiesTierra(Z_Construct_UClass_AGeneradorZombiesTierra, &AGeneradorZombiesTierra::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AGeneradorZombiesTierra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorZombiesTierra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

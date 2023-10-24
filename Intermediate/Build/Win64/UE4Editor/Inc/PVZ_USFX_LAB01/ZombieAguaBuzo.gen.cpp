// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Patterns/FactoryMethod/ZombieAguaBuzo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAguaBuzo() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieAguaBuzo_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieAguaBuzo();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AZombieAguaBuzo::StaticRegisterNativesAZombieAguaBuzo()
	{
	}
	UClass* Z_Construct_UClass_AZombieAguaBuzo_NoRegister()
	{
		return AZombieAguaBuzo::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAguaBuzo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAguaBuzo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAguaBuzo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Patterns/FactoryMethod/ZombieAguaBuzo.h" },
		{ "ModuleRelativePath", "Patterns/FactoryMethod/ZombieAguaBuzo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAguaBuzo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAguaBuzo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAguaBuzo_Statics::ClassParams = {
		&AZombieAguaBuzo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieAguaBuzo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAguaBuzo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAguaBuzo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAguaBuzo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAguaBuzo, 2878107374);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AZombieAguaBuzo>()
	{
		return AZombieAguaBuzo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAguaBuzo(Z_Construct_UClass_AZombieAguaBuzo, &AZombieAguaBuzo::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AZombieAguaBuzo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAguaBuzo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

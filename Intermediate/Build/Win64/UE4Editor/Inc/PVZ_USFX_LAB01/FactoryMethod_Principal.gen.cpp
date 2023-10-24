// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Patterns/FactoryMethod/FactoryMethod_Principal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryMethod_Principal() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AFactoryMethod_Principal_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AFactoryMethod_Principal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AFactoryMethod_Principal::StaticRegisterNativesAFactoryMethod_Principal()
	{
	}
	UClass* Z_Construct_UClass_AFactoryMethod_Principal_NoRegister()
	{
		return AFactoryMethod_Principal::StaticClass();
	}
	struct Z_Construct_UClass_AFactoryMethod_Principal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactoryMethod_Principal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactoryMethod_Principal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Patterns/FactoryMethod/FactoryMethod_Principal.h" },
		{ "ModuleRelativePath", "Patterns/FactoryMethod/FactoryMethod_Principal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactoryMethod_Principal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryMethod_Principal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactoryMethod_Principal_Statics::ClassParams = {
		&AFactoryMethod_Principal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFactoryMethod_Principal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryMethod_Principal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactoryMethod_Principal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactoryMethod_Principal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactoryMethod_Principal, 1796519256);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AFactoryMethod_Principal>()
	{
		return AFactoryMethod_Principal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactoryMethod_Principal(Z_Construct_UClass_AFactoryMethod_Principal, &AFactoryMethod_Principal::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AFactoryMethod_Principal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryMethod_Principal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

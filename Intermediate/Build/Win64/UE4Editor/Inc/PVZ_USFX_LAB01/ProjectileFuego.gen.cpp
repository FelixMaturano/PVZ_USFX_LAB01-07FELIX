// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/ProjectileFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileFuego() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AProjectileFuego_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AProjectileFuego();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_APVZ_USFX_LAB01Projectile();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AProjectileFuego::StaticRegisterNativesAProjectileFuego()
	{
	}
	UClass* Z_Construct_UClass_AProjectileFuego_NoRegister()
	{
		return AProjectileFuego::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APVZ_USFX_LAB01Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectileFuego.h" },
		{ "ModuleRelativePath", "ProjectileFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileFuego_Statics::ClassParams = {
		&AProjectileFuego::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectileFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileFuego, 2153024184);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AProjectileFuego>()
	{
		return AProjectileFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileFuego(Z_Construct_UClass_AProjectileFuego, &AProjectileFuego::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AProjectileFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

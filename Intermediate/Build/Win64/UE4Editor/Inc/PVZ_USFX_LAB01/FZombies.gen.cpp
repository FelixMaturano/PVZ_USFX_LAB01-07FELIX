// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/PatternsBuilder/builder/FZombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFZombies() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UFZombies_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UFZombies();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void UFZombies::StaticRegisterNativesUFZombies()
	{
	}
	UClass* Z_Construct_UClass_UFZombies_NoRegister()
	{
		return UFZombies::StaticClass();
	}
	struct Z_Construct_UClass_UFZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFZombies_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PatternsBuilder/builder/FZombies.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFZombies_Statics::ClassParams = {
		&UFZombies::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFZombies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFZombies, 184099968);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<UFZombies>()
	{
		return UFZombies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFZombies(Z_Construct_UClass_UFZombies, &UFZombies::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("UFZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

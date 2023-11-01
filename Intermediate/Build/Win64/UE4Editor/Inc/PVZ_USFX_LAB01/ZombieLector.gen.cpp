// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/PatternsBuilder/builder/ZombieLector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieLector() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieLector_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombieLector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UFZombies_NoRegister();
// End Cross Module References
	void AZombieLector::StaticRegisterNativesAZombieLector()
	{
	}
	UClass* Z_Construct_UClass_AZombieLector_NoRegister()
	{
		return AZombieLector::StaticClass();
	}
	struct Z_Construct_UClass_AZombieLector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieLector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieLector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatternsBuilder/builder/ZombieLector.h" },
		{ "ModuleRelativePath", "PatternsBuilder/builder/ZombieLector.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieLector_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFZombies_NoRegister, (int32)VTABLE_OFFSET(AZombieLector, IFZombies), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieLector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieLector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieLector_Statics::ClassParams = {
		&AZombieLector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieLector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieLector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieLector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieLector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieLector, 3368238461);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AZombieLector>()
	{
		return AZombieLector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieLector(Z_Construct_UClass_AZombieLector, &AZombieLector::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AZombieLector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieLector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

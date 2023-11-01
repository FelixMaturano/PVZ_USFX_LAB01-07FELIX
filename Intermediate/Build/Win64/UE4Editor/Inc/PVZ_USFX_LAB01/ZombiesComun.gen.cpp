// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/PatternsBuilder/builder/ZombiesComun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiesComun() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombiesComun_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombiesComun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UFZombies_NoRegister();
// End Cross Module References
	void AZombiesComun::StaticRegisterNativesAZombiesComun()
	{
	}
	UClass* Z_Construct_UClass_AZombiesComun_NoRegister()
	{
		return AZombiesComun::StaticClass();
	}
	struct Z_Construct_UClass_AZombiesComun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombiesComun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiesComun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatternsBuilder/builder/ZombiesComun.h" },
		{ "ModuleRelativePath", "PatternsBuilder/builder/ZombiesComun.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombiesComun_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFZombies_NoRegister, (int32)VTABLE_OFFSET(AZombiesComun, IFZombies), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombiesComun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombiesComun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombiesComun_Statics::ClassParams = {
		&AZombiesComun::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombiesComun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesComun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombiesComun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombiesComun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombiesComun, 1536881512);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AZombiesComun>()
	{
		return AZombiesComun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombiesComun(Z_Construct_UClass_AZombiesComun, &AZombiesComun::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AZombiesComun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombiesComun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

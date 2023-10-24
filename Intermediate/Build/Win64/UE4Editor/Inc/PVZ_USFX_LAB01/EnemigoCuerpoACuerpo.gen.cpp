// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Patterns/Decorator/EnemigoCuerpoACuerpo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCuerpoACuerpo() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AEnemigoCuerpoACuerpo_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AEnemigoCuerpoACuerpo();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ADecoratorPlantas();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AEnemigoCuerpoACuerpo::StaticRegisterNativesAEnemigoCuerpoACuerpo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoCuerpoACuerpo_NoRegister()
	{
		return AEnemigoCuerpoACuerpo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecoratorPlantas,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Patterns/Decorator/EnemigoCuerpoACuerpo.h" },
		{ "ModuleRelativePath", "Patterns/Decorator/EnemigoCuerpoACuerpo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCuerpoACuerpo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::ClassParams = {
		&AEnemigoCuerpoACuerpo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoCuerpoACuerpo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoCuerpoACuerpo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoCuerpoACuerpo, 3629657670);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AEnemigoCuerpoACuerpo>()
	{
		return AEnemigoCuerpoACuerpo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoCuerpoACuerpo(Z_Construct_UClass_AEnemigoCuerpoACuerpo, &AEnemigoCuerpoACuerpo::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AEnemigoCuerpoACuerpo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCuerpoACuerpo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

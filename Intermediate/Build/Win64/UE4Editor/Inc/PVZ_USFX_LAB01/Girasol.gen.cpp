// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Girasol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGirasol() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGirasol_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGirasol();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AGirasol::StaticRegisterNativesAGirasol()
	{
	}
	UClass* Z_Construct_UClass_AGirasol_NoRegister()
	{
		return AGirasol::StaticClass();
	}
	struct Z_Construct_UClass_AGirasol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGirasol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGirasol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Girasol.h" },
		{ "ModuleRelativePath", "Girasol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGirasol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGirasol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGirasol_Statics::ClassParams = {
		&AGirasol::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGirasol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGirasol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGirasol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGirasol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGirasol, 843902462);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AGirasol>()
	{
		return AGirasol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGirasol(Z_Construct_UClass_AGirasol, &AGirasol::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AGirasol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGirasol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

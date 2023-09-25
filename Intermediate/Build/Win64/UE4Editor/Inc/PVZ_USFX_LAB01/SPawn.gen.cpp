// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/SPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPawn() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ASPawn_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_ASPawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void ASPawn::StaticRegisterNativesASPawn()
	{
	}
	UClass* Z_Construct_UClass_ASPawn_NoRegister()
	{
		return ASPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPawn.h" },
		{ "ModuleRelativePath", "SPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPawn_Statics::ClassParams = {
		&ASPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPawn, 3167527463);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<ASPawn>()
	{
		return ASPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPawn(Z_Construct_UClass_ASPawn, &ASPawn::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("ASPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

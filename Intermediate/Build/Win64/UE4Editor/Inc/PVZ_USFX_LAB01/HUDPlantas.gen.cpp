// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/HUDPlantas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDPlantas() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AHUDPlantas_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AHUDPlantas();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AHUDPlantas::StaticRegisterNativesAHUDPlantas()
	{
	}
	UClass* Z_Construct_UClass_AHUDPlantas_NoRegister()
	{
		return AHUDPlantas::StaticClass();
	}
	struct Z_Construct_UClass_AHUDPlantas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUDPlantas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUDPlantas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUDPlantas.h" },
		{ "ModuleRelativePath", "HUDPlantas.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUDPlantas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUDPlantas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUDPlantas_Statics::ClassParams = {
		&AHUDPlantas::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUDPlantas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHUDPlantas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUDPlantas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUDPlantas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUDPlantas, 729740028);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AHUDPlantas>()
	{
		return AHUDPlantas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUDPlantas(Z_Construct_UClass_AHUDPlantas, &AHUDPlantas::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AHUDPlantas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUDPlantas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

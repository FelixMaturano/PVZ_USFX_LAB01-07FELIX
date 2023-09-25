// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Controlador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlador() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AControlador_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AControlador();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AControlador::StaticRegisterNativesAControlador()
	{
	}
	UClass* Z_Construct_UClass_AControlador_NoRegister()
	{
		return AControlador::StaticClass();
	}
	struct Z_Construct_UClass_AControlador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Controlador.h" },
		{ "ModuleRelativePath", "Controlador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControlador_Statics::ClassParams = {
		&AControlador::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControlador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControlador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControlador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControlador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControlador, 2345650345);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AControlador>()
	{
		return AControlador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControlador(Z_Construct_UClass_AControlador, &AControlador::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AControlador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

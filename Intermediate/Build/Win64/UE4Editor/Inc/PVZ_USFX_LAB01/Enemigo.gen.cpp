// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Patterns/Decorator/Enemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UEnemigo_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UEnemigo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void UEnemigo::StaticRegisterNativesUEnemigo()
	{
	}
	UClass* Z_Construct_UClass_UEnemigo_NoRegister()
	{
		return UEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_UEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemigo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patterns/Decorator/Enemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemigo_Statics::ClassParams = {
		&UEnemigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemigo, 2342821717);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<UEnemigo>()
	{
		return UEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemigo(Z_Construct_UClass_UEnemigo, &UEnemigo::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("UEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/GrillaAgua.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrillaAgua() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrillaAgua_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrillaAgua();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrilla();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
// End Cross Module References
	void AGrillaAgua::StaticRegisterNativesAGrillaAgua()
	{
	}
	UClass* Z_Construct_UClass_AGrillaAgua_NoRegister()
	{
		return AGrillaAgua::StaticClass();
	}
	struct Z_Construct_UClass_AGrillaAgua_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrillaAgua_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrilla,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrillaAgua_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GrillaAgua.h" },
		{ "ModuleRelativePath", "GrillaAgua.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrillaAgua_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrillaAgua>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrillaAgua_Statics::ClassParams = {
		&AGrillaAgua::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGrillaAgua_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrillaAgua_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrillaAgua()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrillaAgua_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrillaAgua, 1233486247);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AGrillaAgua>()
	{
		return AGrillaAgua::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrillaAgua(Z_Construct_UClass_AGrillaAgua, &AGrillaAgua::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AGrillaAgua"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrillaAgua);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

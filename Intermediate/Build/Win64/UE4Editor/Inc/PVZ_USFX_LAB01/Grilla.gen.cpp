// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Grilla.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrilla() {}
// Cross Module References
	PVZ_USFX_LAB01_API UEnum* Z_Construct_UEnum_PVZ_USFX_LAB01_EHexTileType();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrilla_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGrilla();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
// End Cross Module References
	static UEnum* EHexTileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PVZ_USFX_LAB01_EHexTileType, Z_Construct_UPackage__Script_PVZ_USFX_LAB01(), TEXT("EHexTileType"));
		}
		return Singleton;
	}
	template<> PVZ_USFX_LAB01_API UEnum* StaticEnum<EHexTileType>()
	{
		return EHexTileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHexTileType(EHexTileType_StaticEnum, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("EHexTileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PVZ_USFX_LAB01_EHexTileType_Hash() { return 792035760U; }
	UEnum* Z_Construct_UEnum_PVZ_USFX_LAB01_EHexTileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHexTileType"), 0, Get_Z_Construct_UEnum_PVZ_USFX_LAB01_EHexTileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHexTileType::INVALIDO", (int64)EHexTileType::INVALIDO },
				{ "EHexTileType::PASTO", (int64)EHexTileType::PASTO },
				{ "EHexTileType::AGUA", (int64)EHexTileType::AGUA },
				{ "EHexTileType::MAX", (int64)EHexTileType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AGUA.Name", "EHexTileType::AGUA" },
				{ "INVALIDO.Name", "EHexTileType::INVALIDO" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EHexTileType::MAX" },
				{ "ModuleRelativePath", "Grilla.h" },
				{ "PASTO.Name", "EHexTileType::PASTO" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
				nullptr,
				"EHexTileType",
				"EHexTileType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AGrilla::StaticRegisterNativesAGrilla()
	{
	}
	UClass* Z_Construct_UClass_AGrilla_NoRegister()
	{
		return AGrilla::StaticClass();
	}
	struct Z_Construct_UClass_AGrilla_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TipoGrilla_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoGrilla_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TipoGrilla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGrilla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshGrilla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrilla_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrilla_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grilla.h" },
		{ "ModuleRelativePath", "Grilla.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla_MetaData[] = {
		{ "Category", "Grilla" },
		{ "ModuleRelativePath", "Grilla.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla = { "TipoGrilla", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrilla, TipoGrilla), Z_Construct_UEnum_PVZ_USFX_LAB01_EHexTileType, METADATA_PARAMS(Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrilla_Statics::NewProp_MeshGrilla_MetaData[] = {
		{ "Category", "Grilla" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grilla.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrilla_Statics::NewProp_MeshGrilla = { "MeshGrilla", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrilla, MeshGrilla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrilla_Statics::NewProp_MeshGrilla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrilla_Statics::NewProp_MeshGrilla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrilla_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "ModuleRelativePath", "Grilla.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrilla_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrilla, OwningGrid), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrilla_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrilla_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrilla_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrilla_Statics::NewProp_TipoGrilla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrilla_Statics::NewProp_MeshGrilla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrilla_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrilla_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrilla>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrilla_Statics::ClassParams = {
		&AGrilla::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrilla_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrilla_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrilla_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrilla_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrilla()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrilla_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrilla, 2490342195);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AGrilla>()
	{
		return AGrilla::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrilla(Z_Construct_UClass_AGrilla, &AGrilla::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AGrilla"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrilla);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/FStiloWidgetSlateWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFStiloWidgetSlateWidgetStyle() {}
// Cross Module References
	PVZ_USFX_LAB01_API UScriptStruct* Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FFStiloWidgetSlateStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFStiloWidgetSlateStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FFStiloWidgetSlateStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PVZ_USFX_LAB01_API uint32 Get_Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle, Z_Construct_UPackage__Script_PVZ_USFX_LAB01(), TEXT("FStiloWidgetSlateStyle"), sizeof(FFStiloWidgetSlateStyle), Get_Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Hash());
	}
	return Singleton;
}
template<> PVZ_USFX_LAB01_API UScriptStruct* StaticStruct<FFStiloWidgetSlateStyle>()
{
	return FFStiloWidgetSlateStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFStiloWidgetSlateStyle(FFStiloWidgetSlateStyle::StaticStruct, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("FStiloWidgetSlateStyle"), false, nullptr, nullptr);
static struct FScriptStruct_PVZ_USFX_LAB01_StaticRegisterNativesFFStiloWidgetSlateStyle
{
	FScriptStruct_PVZ_USFX_LAB01_StaticRegisterNativesFFStiloWidgetSlateStyle()
	{
		UScriptStruct::DeferCppStructOps<FFStiloWidgetSlateStyle>(FName(TEXT("FStiloWidgetSlateStyle")));
	}
} ScriptStruct_PVZ_USFX_LAB01_StaticRegisterNativesFFStiloWidgetSlateStyle;
	struct Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "FStiloWidgetSlateWidgetStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFStiloWidgetSlateStyle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FStiloWidgetSlateStyle",
		sizeof(FFStiloWidgetSlateStyle),
		alignof(FFStiloWidgetSlateStyle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FStiloWidgetSlateStyle"), sizeof(FFStiloWidgetSlateStyle), Get_Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle_Hash() { return 1533279933U; }
	void UFStiloWidgetSlateWidgetStyle::StaticRegisterNativesUFStiloWidgetSlateWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_NoRegister()
	{
		return UFStiloWidgetSlateWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FStiloWidgetSlateWidgetStyle.h" },
		{ "ModuleRelativePath", "FStiloWidgetSlateWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the widget appearance. */" },
		{ "ModuleRelativePath", "FStiloWidgetSlateWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the widget appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFStiloWidgetSlateWidgetStyle, WidgetStyle), Z_Construct_UScriptStruct_FFStiloWidgetSlateStyle, METADATA_PARAMS(Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFStiloWidgetSlateWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::ClassParams = {
		&UFStiloWidgetSlateWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFStiloWidgetSlateWidgetStyle, 2216237501);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<UFStiloWidgetSlateWidgetStyle>()
	{
		return UFStiloWidgetSlateWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFStiloWidgetSlateWidgetStyle(Z_Construct_UClass_UFStiloWidgetSlateWidgetStyle, &UFStiloWidgetSlateWidgetStyle::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("UFStiloWidgetSlateWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFStiloWidgetSlateWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

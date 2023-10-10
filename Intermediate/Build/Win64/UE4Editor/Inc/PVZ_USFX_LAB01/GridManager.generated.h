// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_USFX_LAB01_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define PVZ_USFX_LAB01_GridManager_generated_h

#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_SPARSE_DATA
#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_RPC_WRAPPERS
#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB01"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB01"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridManager(AGridManager&&); \
	NO_API AGridManager(const AGridManager&); \
public:


#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridManager(AGridManager&&); \
	NO_API AGridManager(const AGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager)


#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TamanoX() { return STRUCT_OFFSET(AGridManager, TamanoX); } \
	FORCEINLINE static uint32 __PPO__TamanoY() { return STRUCT_OFFSET(AGridManager, TamanoY); } \
	FORCEINLINE static uint32 __PPO__EspaciadoGrillaX() { return STRUCT_OFFSET(AGridManager, EspaciadoGrillaX); } \
	FORCEINLINE static uint32 __PPO__EspaciadoGrillaY() { return STRUCT_OFFSET(AGridManager, EspaciadoGrillaY); } \
	FORCEINLINE static uint32 __PPO__GrillaPasto() { return STRUCT_OFFSET(AGridManager, GrillaPasto); } \
	FORCEINLINE static uint32 __PPO__GrillaAgua() { return STRUCT_OFFSET(AGridManager, GrillaAgua); }


#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_13_PROLOG
#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_SPARSE_DATA \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_RPC_WRAPPERS \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_INCLASS \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_SPARSE_DATA \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB01_API UClass* StaticClass<class AGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB01_05_Source_PVZ_USFX_LAB01_GridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

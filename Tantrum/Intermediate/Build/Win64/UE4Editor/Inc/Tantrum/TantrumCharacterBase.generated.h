// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANTRUM_TantrumCharacterBase_generated_h
#error "TantrumCharacterBase.generated.h already included, missing '#pragma once' in TantrumCharacterBase.h"
#endif
#define TANTRUM_TantrumCharacterBase_generated_h

#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_SPARSE_DATA
#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_RPC_WRAPPERS
#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumCharacterBase(); \
	friend struct Z_Construct_UClass_ATantrumCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumCharacterBase)


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATantrumCharacterBase(); \
	friend struct Z_Construct_UClass_ATantrumCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumCharacterBase)


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumCharacterBase(ATantrumCharacterBase&&); \
	NO_API ATantrumCharacterBase(const ATantrumCharacterBase&); \
public:


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumCharacterBase(ATantrumCharacterBase&&); \
	NO_API ATantrumCharacterBase(const ATantrumCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATantrumCharacterBase)


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinImpactSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, MinImpactSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxImpactSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, MaxImpactSpeed); } \
	FORCEINLINE static uint32 __PPO__MinStunTime() { return STRUCT_OFFSET(ATantrumCharacterBase, MinStunTime); } \
	FORCEINLINE static uint32 __PPO__MaxStunTime() { return STRUCT_OFFSET(ATantrumCharacterBase, MaxStunTime); } \
	FORCEINLINE static uint32 __PPO__MaxWalkSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, MaxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSprintSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, MaxSprintSpeed); }


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_11_PROLOG
#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_RPC_WRAPPERS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_INCLASS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class ATantrumCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrum_Source_Tantrum_TantrumCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

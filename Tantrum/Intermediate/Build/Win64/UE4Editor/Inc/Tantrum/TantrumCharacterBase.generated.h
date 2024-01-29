// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
class UAnimMontage;
enum class ECharacterThrowState : uint8;
#ifdef TANTRUM_TantrumCharacterBase_generated_h
#error "TantrumCharacterBase.generated.h already included, missing '#pragma once' in TantrumCharacterBase.h"
#endif
#define TANTRUM_TantrumCharacterBase_generated_h

#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_SPARSE_DATA
#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execIsStunned); \
	DECLARE_FUNCTION(execGetCharacterThrowState); \
	DECLARE_FUNCTION(execIsThrowing); \
	DECLARE_FUNCTION(execIsPullingObject);


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execIsStunned); \
	DECLARE_FUNCTION(execGetCharacterThrowState); \
	DECLARE_FUNCTION(execIsThrowing); \
	DECLARE_FUNCTION(execIsPullingObject);


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumCharacterBase(); \
	friend struct Z_Construct_UClass_ATantrumCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumCharacterBase)


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesATantrumCharacterBase(); \
	friend struct Z_Construct_UClass_ATantrumCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumCharacterBase)


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_STANDARD_CONSTRUCTORS \
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


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumCharacterBase(ATantrumCharacterBase&&); \
	NO_API ATantrumCharacterBase(const ATantrumCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATantrumCharacterBase)


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__MinImpactSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, MinImpactSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxImpactSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, MaxImpactSpeed); } \
	FORCEINLINE static uint32 __PPO__MinStunTime() { return STRUCT_OFFSET(ATantrumCharacterBase, MinStunTime); } \
	FORCEINLINE static uint32 __PPO__MaxStunTime() { return STRUCT_OFFSET(ATantrumCharacterBase, MaxStunTime); } \
	FORCEINLINE static uint32 __PPO__HeavyLandSound() { return STRUCT_OFFSET(ATantrumCharacterBase, HeavyLandSound); } \
	FORCEINLINE static uint32 __PPO__CharacterThrowState() { return STRUCT_OFFSET(ATantrumCharacterBase, CharacterThrowState); } \
	FORCEINLINE static uint32 __PPO__ThrowSpeed() { return STRUCT_OFFSET(ATantrumCharacterBase, ThrowSpeed); } \
	FORCEINLINE static uint32 __PPO__ThrowMontage() { return STRUCT_OFFSET(ATantrumCharacterBase, ThrowMontage); } \
	FORCEINLINE static uint32 __PPO__ThrowableObject() { return STRUCT_OFFSET(ATantrumCharacterBase, ThrowableObject); }


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_22_PROLOG
#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_RPC_WRAPPERS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_INCLASS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_INCLASS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumCharacterBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class ATantrumCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrum_Source_Tantrum_TantrumCharacterBase_h


#define FOREACH_ENUM_ECHARACTERTHROWSTATE(op) \
	op(ECharacterThrowState::None) \
	op(ECharacterThrowState::RequestingPull) \
	op(ECharacterThrowState::Pulling) \
	op(ECharacterThrowState::Attached) \
	op(ECharacterThrowState::Throwing) 

enum class ECharacterThrowState : uint8;
template<> TANTRUM_API UEnum* StaticEnum<ECharacterThrowState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

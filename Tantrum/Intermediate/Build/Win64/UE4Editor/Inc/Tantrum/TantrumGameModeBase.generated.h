// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameState : uint8;
#ifdef TANTRUM_TantrumGameModeBase_generated_h
#error "TantrumGameModeBase.generated.h already included, missing '#pragma once' in TantrumGameModeBase.h"
#endif
#define TANTRUM_TantrumGameModeBase_generated_h

#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_SPARSE_DATA
#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGameState);


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGameState);


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumGameModeBase(); \
	friend struct Z_Construct_UClass_ATantrumGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumGameModeBase)


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATantrumGameModeBase(); \
	friend struct Z_Construct_UClass_ATantrumGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumGameModeBase)


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumGameModeBase(ATantrumGameModeBase&&); \
	NO_API ATantrumGameModeBase(const ATantrumGameModeBase&); \
public:


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumGameModeBase(ATantrumGameModeBase&&); \
	NO_API ATantrumGameModeBase(const ATantrumGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATantrumGameModeBase)


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentGameState() { return STRUCT_OFFSET(ATantrumGameModeBase, CurrentGameState); } \
	FORCEINLINE static uint32 __PPO__GameCountdownDuration() { return STRUCT_OFFSET(ATantrumGameModeBase, GameCountdownDuration); } \
	FORCEINLINE static uint32 __PPO__GameWidget() { return STRUCT_OFFSET(ATantrumGameModeBase, GameWidget); } \
	FORCEINLINE static uint32 __PPO__GameWidgetClass() { return STRUCT_OFFSET(ATantrumGameModeBase, GameWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TimeToRescuePlayer() { return STRUCT_OFFSET(ATantrumGameModeBase, TimeToRescuePlayer); } \
	FORCEINLINE static uint32 __PPO__KillZ() { return STRUCT_OFFSET(ATantrumGameModeBase, KillZ); }


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_21_PROLOG
#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_RPC_WRAPPERS \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_INCLASS \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_INCLASS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumGameModeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class ATantrumGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrum_Source_Tantrum_TantrumGameModeBase_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::None) \
	op(EGameState::Waiting) \
	op(EGameState::Playing) \
	op(EGameState::Paused) \
	op(EGameState::GameOver) 

enum class EGameState : uint8;
template<> TANTRUM_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

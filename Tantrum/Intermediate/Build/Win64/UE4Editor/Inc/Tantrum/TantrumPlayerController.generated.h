// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANTRUM_TantrumPlayerController_generated_h
#error "TantrumPlayerController.generated.h already included, missing '#pragma once' in TantrumPlayerController.h"
#endif
#define TANTRUM_TantrumPlayerController_generated_h

#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_SPARSE_DATA
#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_RPC_WRAPPERS
#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumPlayerController(); \
	friend struct Z_Construct_UClass_ATantrumPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATantrumPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumPlayerController)


#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATantrumPlayerController(); \
	friend struct Z_Construct_UClass_ATantrumPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATantrumPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumPlayerController)


#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumPlayerController(ATantrumPlayerController&&); \
	NO_API ATantrumPlayerController(const ATantrumPlayerController&); \
public:


#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumPlayerController(ATantrumPlayerController&&); \
	NO_API ATantrumPlayerController(const ATantrumPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumPlayerController)


#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomRate() { return STRUCT_OFFSET(ATantrumPlayerController, ZoomRate); } \
	FORCEINLINE static uint32 __PPO__MinZoomFOV() { return STRUCT_OFFSET(ATantrumPlayerController, MinZoomFOV); } \
	FORCEINLINE static uint32 __PPO__MaxZoomFOV() { return STRUCT_OFFSET(ATantrumPlayerController, MaxZoomFOV); } \
	FORCEINLINE static uint32 __PPO__MaxWalkSpeed() { return STRUCT_OFFSET(ATantrumPlayerController, MaxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(ATantrumPlayerController, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ATantrumPlayerController, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookRightRate() { return STRUCT_OFFSET(ATantrumPlayerController, BaseLookRightRate); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ATantrumPlayerController, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(ATantrumPlayerController, HUDClass); } \
	FORCEINLINE static uint32 __PPO__HUDWidget() { return STRUCT_OFFSET(ATantrumPlayerController, HUDWidget); } \
	FORCEINLINE static uint32 __PPO__JumpSound() { return STRUCT_OFFSET(ATantrumPlayerController, JumpSound); } \
	FORCEINLINE static uint32 __PPO__FlickThreshold() { return STRUCT_OFFSET(ATantrumPlayerController, FlickThreshold); }


#define Tantrum_Source_Tantrum_TantrumPlayerController_h_13_PROLOG
#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_RPC_WRAPPERS \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_INCLASS \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_TantrumPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_SPARSE_DATA \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_TantrumPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class ATantrumPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrum_Source_Tantrum_TantrumPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

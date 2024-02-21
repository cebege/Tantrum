// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FVector;
#ifdef TANTRUM_ThrowableObject_generated_h
#error "ThrowableObject.generated.h already included, missing '#pragma once' in ThrowableObject.h"
#endif
#define TANTRUM_ThrowableObject_generated_h

#define Tantrum_Source_Tantrum_ThrowableObject_h_16_SPARSE_DATA
#define Tantrum_Source_Tantrum_ThrowableObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHomingTarget); \
	DECLARE_FUNCTION(execProjectileStop); \
	DECLARE_FUNCTION(execToggleHighlight); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execPull); \
	DECLARE_FUNCTION(execIsIdle);


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHomingTarget); \
	DECLARE_FUNCTION(execProjectileStop); \
	DECLARE_FUNCTION(execToggleHighlight); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execPull); \
	DECLARE_FUNCTION(execIsIdle);


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowableObject(); \
	friend struct Z_Construct_UClass_AThrowableObject_Statics; \
public: \
	DECLARE_CLASS(AThrowableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(AThrowableObject)


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAThrowableObject(); \
	friend struct Z_Construct_UClass_AThrowableObject_Statics; \
public: \
	DECLARE_CLASS(AThrowableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(AThrowableObject)


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrowableObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableObject(AThrowableObject&&); \
	NO_API AThrowableObject(const AThrowableObject&); \
public:


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableObject(AThrowableObject&&); \
	NO_API AThrowableObject(const AThrowableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowableObject)


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AThrowableObject, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AThrowableObject, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__PullActor() { return STRUCT_OFFSET(AThrowableObject, PullActor); } \
	FORCEINLINE static uint32 __PPO__EffectType() { return STRUCT_OFFSET(AThrowableObject, EffectType); }


#define Tantrum_Source_Tantrum_ThrowableObject_h_13_PROLOG
#define Tantrum_Source_Tantrum_ThrowableObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_SPARSE_DATA \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_RPC_WRAPPERS \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_INCLASS \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_ThrowableObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_PRIVATE_PROPERTY_OFFSET \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_SPARSE_DATA \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_INCLASS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_ThrowableObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class AThrowableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrum_Source_Tantrum_ThrowableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

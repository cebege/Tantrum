// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEffectType : uint8;
#ifdef TANTRUM_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define TANTRUM_InteractInterface_generated_h

#define Tantrum_Source_Tantrum_InteractInterface_h_13_SPARSE_DATA
#define Tantrum_Source_Tantrum_InteractInterface_h_13_RPC_WRAPPERS \
	virtual void ApplyEffect_Implementation(EEffectType EffectType, bool bIsBuff) {}; \
 \
	DECLARE_FUNCTION(execApplyEffect);


#define Tantrum_Source_Tantrum_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyEffect_Implementation(EEffectType EffectType, bool bIsBuff) {}; \
 \
	DECLARE_FUNCTION(execApplyEffect);


#define Tantrum_Source_Tantrum_InteractInterface_h_13_EVENT_PARMS \
	struct InteractInterface_eventApplyEffect_Parms \
	{ \
		EEffectType EffectType; \
		bool bIsBuff; \
	};


#define Tantrum_Source_Tantrum_InteractInterface_h_13_CALLBACK_WRAPPERS
#define Tantrum_Source_Tantrum_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANTRUM_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANTRUM_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANTRUM_API UInteractInterface(UInteractInterface&&); \
	TANTRUM_API UInteractInterface(const UInteractInterface&); \
public:


#define Tantrum_Source_Tantrum_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANTRUM_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANTRUM_API UInteractInterface(UInteractInterface&&); \
	TANTRUM_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANTRUM_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define Tantrum_Source_Tantrum_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Tantrum"), TANTRUM_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define Tantrum_Source_Tantrum_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tantrum_Source_Tantrum_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Tantrum_Source_Tantrum_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tantrum_Source_Tantrum_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Tantrum_Source_Tantrum_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ApplyEffect(UObject* O, EEffectType EffectType, bool bIsBuff); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tantrum_Source_Tantrum_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ApplyEffect(UObject* O, EEffectType EffectType, bool bIsBuff); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tantrum_Source_Tantrum_InteractInterface_h_10_PROLOG \
	Tantrum_Source_Tantrum_InteractInterface_h_13_EVENT_PARMS


#define Tantrum_Source_Tantrum_InteractInterface_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_InteractInterface_h_13_SPARSE_DATA \
	Tantrum_Source_Tantrum_InteractInterface_h_13_RPC_WRAPPERS \
	Tantrum_Source_Tantrum_InteractInterface_h_13_CALLBACK_WRAPPERS \
	Tantrum_Source_Tantrum_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrum_Source_Tantrum_InteractInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrum_Source_Tantrum_InteractInterface_h_13_SPARSE_DATA \
	Tantrum_Source_Tantrum_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrum_Source_Tantrum_InteractInterface_h_13_CALLBACK_WRAPPERS \
	Tantrum_Source_Tantrum_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrum_Source_Tantrum_InteractInterface_h


#define FOREACH_ENUM_EEFFECTTYPE(op) \
	op(EEffectType::None) \
	op(EEffectType::Speed) \
	op(EEffectType::Jump) \
	op(EEffectType::Power) 

enum class EEffectType : uint8;
template<> TANTRUM_API UEnum* StaticEnum<EEffectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

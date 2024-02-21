// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/ThrowableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableObject() {}
// Cross Module References
	TANTRUM_API UClass* Z_Construct_UClass_AThrowableObject_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_AThrowableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tantrum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	TANTRUM_API UEnum* Z_Construct_UEnum_Tantrum_EEffectType();
// End Cross Module References
	DEFINE_FUNCTION(AThrowableObject::execSetHomingTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHomingTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableObject::execProjectileStop)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileStop(Z_Param_Out_ImpactResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableObject::execToggleHighlight)
	{
		P_GET_UBOOL(Z_Param_bIsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleHighlight(Z_Param_bIsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableObject::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableObject::execLaunch)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InitialVelocity);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Launch(Z_Param_Out_InitialVelocity,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableObject::execPull)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Pull(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableObject::execIsIdle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIdle();
		P_NATIVE_END;
	}
	void AThrowableObject::StaticRegisterNativesAThrowableObject()
	{
		UClass* Class = AThrowableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &AThrowableObject::execDrop },
			{ "IsIdle", &AThrowableObject::execIsIdle },
			{ "Launch", &AThrowableObject::execLaunch },
			{ "ProjectileStop", &AThrowableObject::execProjectileStop },
			{ "Pull", &AThrowableObject::execPull },
			{ "SetHomingTarget", &AThrowableObject::execSetHomingTarget },
			{ "ToggleHighlight", &AThrowableObject::execToggleHighlight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowableObject_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableObject_IsIdle_Statics
	{
		struct ThrowableObject_eventIsIdle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThrowableObject_eventIsIdle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowableObject_eventIsIdle_Parms), &Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called every frame\n//virtual void Tick(float DeltaTime) override;\n" },
		{ "ModuleRelativePath", "ThrowableObject.h" },
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "IsIdle", nullptr, nullptr, sizeof(ThrowableObject_eventIsIdle_Parms), Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_IsIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_IsIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableObject_Launch_Statics
	{
		struct ThrowableObject_eventLaunch_Parms
		{
			FVector InitialVelocity;
			AActor* Target;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableObject_eventLaunch_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_InitialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_InitialVelocity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableObject_eventLaunch_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableObject_Launch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_InitialVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_Launch_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_Launch_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "Launch", nullptr, nullptr, sizeof(ThrowableObject_eventLaunch_Parms), Z_Construct_UFunction_AThrowableObject_Launch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_Launch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics
	{
		struct ThrowableObject_eventProjectileStop_Parms
		{
			FHitResult ImpactResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableObject_eventProjectileStop_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::NewProp_ImpactResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::NewProp_ImpactResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "ProjectileStop", nullptr, nullptr, sizeof(ThrowableObject_eventProjectileStop_Parms), Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_ProjectileStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_ProjectileStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableObject_Pull_Statics
	{
		struct ThrowableObject_eventPull_Parms
		{
			AActor* InActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableObject_Pull_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableObject_eventPull_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AThrowableObject_Pull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThrowableObject_eventPull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowableObject_Pull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowableObject_eventPull_Parms), &Z_Construct_UFunction_AThrowableObject_Pull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableObject_Pull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_Pull_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_Pull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_Pull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_Pull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "Pull", nullptr, nullptr, sizeof(ThrowableObject_eventPull_Parms), Z_Construct_UFunction_AThrowableObject_Pull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_Pull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_Pull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_Pull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_Pull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_Pull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics
	{
		struct ThrowableObject_eventSetHomingTarget_Parms
		{
			AActor* Target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowableObject_eventSetHomingTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThrowableObject_eventSetHomingTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowableObject_eventSetHomingTarget_Parms), &Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "SetHomingTarget", nullptr, nullptr, sizeof(ThrowableObject_eventSetHomingTarget_Parms), Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_SetHomingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_SetHomingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics
	{
		struct ThrowableObject_eventToggleHighlight_Parms
		{
			bool bIsOn;
		};
		static void NewProp_bIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::NewProp_bIsOn_SetBit(void* Obj)
	{
		((ThrowableObject_eventToggleHighlight_Parms*)Obj)->bIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::NewProp_bIsOn = { "bIsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThrowableObject_eventToggleHighlight_Parms), &Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::NewProp_bIsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::NewProp_bIsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableObject, nullptr, "ToggleHighlight", nullptr, nullptr, sizeof(ThrowableObject_eventToggleHighlight_Parms), Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowableObject_ToggleHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThrowableObject_ToggleHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThrowableObject_NoRegister()
	{
		return AThrowableObject::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PullActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PullActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableObject_Drop, "Drop" }, // 4201297969
		{ &Z_Construct_UFunction_AThrowableObject_IsIdle, "IsIdle" }, // 2866537461
		{ &Z_Construct_UFunction_AThrowableObject_Launch, "Launch" }, // 1111253062
		{ &Z_Construct_UFunction_AThrowableObject_ProjectileStop, "ProjectileStop" }, // 2746518076
		{ &Z_Construct_UFunction_AThrowableObject_Pull, "Pull" }, // 4244645136
		{ &Z_Construct_UFunction_AThrowableObject_SetHomingTarget, "SetHomingTarget" }, // 1836650179
		{ &Z_Construct_UFunction_AThrowableObject_ToggleHighlight, "ToggleHighlight" }, // 809292466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThrowableObject.h" },
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableObject_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "ThrowableObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableObject_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableObject, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableObject_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableObject_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableObject_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "ThrowableObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableObject_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableObject, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableObject_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableObject_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableObject_Statics::NewProp_PullActor_MetaData[] = {
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableObject_Statics::NewProp_PullActor = { "PullActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableObject, PullActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThrowableObject_Statics::NewProp_PullActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableObject_Statics::NewProp_PullActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "ThrowableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableObject, EffectType), Z_Construct_UEnum_Tantrum_EEffectType, METADATA_PARAMS(Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableObject_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableObject_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableObject_Statics::NewProp_PullActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableObject_Statics::NewProp_EffectType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThrowableObject_Statics::ClassParams = {
		&AThrowableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThrowableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrowableObject, 2901683694);
	template<> TANTRUM_API UClass* StaticClass<AThrowableObject>()
	{
		return AThrowableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrowableObject(Z_Construct_UClass_AThrowableObject, &AThrowableObject::StaticClass, TEXT("/Script/Tantrum"), TEXT("AThrowableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

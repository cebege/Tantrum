// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumCharacterBase() {}
// Cross Module References
	TANTRUM_API UEnum* Z_Construct_UEnum_Tantrum_ECharacterThrowState();
	UPackage* Z_Construct_UPackage__Script_Tantrum();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_AThrowableObject_NoRegister();
// End Cross Module References
	static UEnum* ECharacterThrowState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tantrum_ECharacterThrowState, Z_Construct_UPackage__Script_Tantrum(), TEXT("ECharacterThrowState"));
		}
		return Singleton;
	}
	template<> TANTRUM_API UEnum* StaticEnum<ECharacterThrowState>()
	{
		return ECharacterThrowState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterThrowState(ECharacterThrowState_StaticEnum, TEXT("/Script/Tantrum"), TEXT("ECharacterThrowState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tantrum_ECharacterThrowState_Hash() { return 3142263168U; }
	UEnum* Z_Construct_UEnum_Tantrum_ECharacterThrowState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrum();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterThrowState"), 0, Get_Z_Construct_UEnum_Tantrum_ECharacterThrowState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterThrowState::None", (int64)ECharacterThrowState::None },
				{ "ECharacterThrowState::RequestingPull", (int64)ECharacterThrowState::RequestingPull },
				{ "ECharacterThrowState::Pulling", (int64)ECharacterThrowState::Pulling },
				{ "ECharacterThrowState::Attached", (int64)ECharacterThrowState::Attached },
				{ "ECharacterThrowState::Throwing", (int64)ECharacterThrowState::Throwing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attached.DisplayName", "Attached" },
				{ "Attached.Name", "ECharacterThrowState::Attached" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "TantrumCharacterBase.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ECharacterThrowState::None" },
				{ "Pulling.DisplayName", "Pulling" },
				{ "Pulling.Name", "ECharacterThrowState::Pulling" },
				{ "RequestingPull.DisplayName", "RequestingPull" },
				{ "RequestingPull.Name", "ECharacterThrowState::RequestingPull" },
				{ "Throwing.DisplayName", "Throwing" },
				{ "Throwing.Name", "ECharacterThrowState::Throwing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tantrum,
				nullptr,
				"ECharacterThrowState",
				"ECharacterThrowState",
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
	DEFINE_FUNCTION(ATantrumCharacterBase::execOnNotifyEndReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execOnNotifyBeginReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execIsStunned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStunned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execGetCharacterThrowState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterThrowState*)Z_Param__Result=P_THIS->GetCharacterThrowState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execIsThrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsThrowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumCharacterBase::execIsPullingObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPullingObject();
		P_NATIVE_END;
	}
	void ATantrumCharacterBase::StaticRegisterNativesATantrumCharacterBase()
	{
		UClass* Class = ATantrumCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterThrowState", &ATantrumCharacterBase::execGetCharacterThrowState },
			{ "IsPullingObject", &ATantrumCharacterBase::execIsPullingObject },
			{ "IsStunned", &ATantrumCharacterBase::execIsStunned },
			{ "IsThrowing", &ATantrumCharacterBase::execIsThrowing },
			{ "OnMontageBlendingOut", &ATantrumCharacterBase::execOnMontageBlendingOut },
			{ "OnMontageEnded", &ATantrumCharacterBase::execOnMontageEnded },
			{ "OnNotifyBeginReceived", &ATantrumCharacterBase::execOnNotifyBeginReceived },
			{ "OnNotifyEndReceived", &ATantrumCharacterBase::execOnNotifyEndReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics
	{
		struct TantrumCharacterBase_eventGetCharacterThrowState_Parms
		{
			ECharacterThrowState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventGetCharacterThrowState_Parms, ReturnValue), Z_Construct_UEnum_Tantrum_ECharacterThrowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "GetCharacterThrowState", nullptr, nullptr, sizeof(TantrumCharacterBase_eventGetCharacterThrowState_Parms), Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics
	{
		struct TantrumCharacterBase_eventIsPullingObject_Parms
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
	void Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumCharacterBase_eventIsPullingObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumCharacterBase_eventIsPullingObject_Parms), &Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "IsPullingObject", nullptr, nullptr, sizeof(TantrumCharacterBase_eventIsPullingObject_Parms), Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics
	{
		struct TantrumCharacterBase_eventIsStunned_Parms
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
	void Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumCharacterBase_eventIsStunned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumCharacterBase_eventIsStunned_Parms), &Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "IsStunned", nullptr, nullptr, sizeof(TantrumCharacterBase_eventIsStunned_Parms), Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_IsStunned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_IsStunned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics
	{
		struct TantrumCharacterBase_eventIsThrowing_Parms
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
	void Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumCharacterBase_eventIsThrowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumCharacterBase_eventIsThrowing_Parms), &Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "IsThrowing", nullptr, nullptr, sizeof(TantrumCharacterBase_eventIsThrowing_Parms), Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics
	{
		struct TantrumCharacterBase_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((TantrumCharacterBase_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumCharacterBase_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(TantrumCharacterBase_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics
	{
		struct TantrumCharacterBase_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((TantrumCharacterBase_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumCharacterBase_eventOnMontageEnded_Parms), &Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(TantrumCharacterBase_eventOnMontageEnded_Parms), Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics
	{
		struct TantrumCharacterBase_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, sizeof(TantrumCharacterBase_eventOnNotifyBeginReceived_Parms), Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics
	{
		struct TantrumCharacterBase_eventOnNotifyEndReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumCharacterBase_eventOnNotifyEndReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumCharacterBase, nullptr, "OnNotifyEndReceived", nullptr, nullptr, sizeof(TantrumCharacterBase_eventOnNotifyEndReceived_Parms), Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister()
	{
		return ATantrumCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinImpactSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinImpactSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxImpactSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxImpactSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinStunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinStunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyLandSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeavyLandSound;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterThrowState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterThrowState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterThrowState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumCharacterBase_GetCharacterThrowState, "GetCharacterThrowState" }, // 449377047
		{ &Z_Construct_UFunction_ATantrumCharacterBase_IsPullingObject, "IsPullingObject" }, // 3170561835
		{ &Z_Construct_UFunction_ATantrumCharacterBase_IsStunned, "IsStunned" }, // 4187085934
		{ &Z_Construct_UFunction_ATantrumCharacterBase_IsThrowing, "IsThrowing" }, // 74751513
		{ &Z_Construct_UFunction_ATantrumCharacterBase_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 1416596602
		{ &Z_Construct_UFunction_ATantrumCharacterBase_OnMontageEnded, "OnMontageEnded" }, // 2466520361
		{ &Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 1840122556
		{ &Z_Construct_UFunction_ATantrumCharacterBase_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 625311259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TantrumCharacterBase.h" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed = { "MinImpactSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, MinImpactSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed = { "MaxImpactSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, MaxImpactSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Time in Seconds\n" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
		{ "ToolTip", "Time in Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime = { "MinStunTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, MinStunTime), METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Time in Seconds\n" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
		{ "ToolTip", "Time in Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime = { "MaxStunTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, MaxStunTime), METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_HeavyLandSound_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Sound Cue Fall Impact\n" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
		{ "ToolTip", "Sound Cue Fall Impact" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_HeavyLandSound = { "HeavyLandSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, HeavyLandSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_HeavyLandSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_HeavyLandSound_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState_MetaData[] = {
		{ "Category", "Throw" },
		{ "Comment", "/*bool bIsLoaded = false;\n\x09""bool bIsPullingObject = false;\n\x09""bool bIsThrowingObject = false;*/" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
		{ "ToolTip", "bool bIsLoaded = false;\n       bool bIsPullingObject = false;\n       bool bIsThrowingObject = false;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState = { "CharacterThrowState", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, CharacterThrowState), Z_Construct_UEnum_Tantrum_ECharacterThrowState, METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowSpeed_MetaData[] = {
		{ "Category", "Throw" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
		{ "Unit", "ms" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowSpeed = { "ThrowSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, ThrowSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowMontage = { "ThrowMontage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, ThrowMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowableObject_MetaData[] = {
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowableObject = { "ThrowableObject", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumCharacterBase, ThrowableObject), Z_Construct_UClass_AThrowableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowableObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_HeavyLandSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_CharacterThrowState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_ThrowableObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams = {
		&ATantrumCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumCharacterBase, 2619588852);
	template<> TANTRUM_API UClass* StaticClass<ATantrumCharacterBase>()
	{
		return ATantrumCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumCharacterBase(Z_Construct_UClass_ATantrumCharacterBase, &ATantrumCharacterBase::StaticClass, TEXT("/Script/Tantrum"), TEXT("ATantrumCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumGameModeBase() {}
// Cross Module References
	TANTRUM_API UEnum* Z_Construct_UEnum_Tantrum_EGameState();
	UPackage* Z_Construct_UPackage__Script_Tantrum();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumGameModeBase_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TANTRUM_API UClass* Z_Construct_UClass_UTantrumGameWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tantrum_EGameState, Z_Construct_UPackage__Script_Tantrum(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> TANTRUM_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/Tantrum"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tantrum_EGameState_Hash() { return 3346384631U; }
	UEnum* Z_Construct_UEnum_Tantrum_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrum();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_Tantrum_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::None", (int64)EGameState::None },
				{ "EGameState::Waiting", (int64)EGameState::Waiting },
				{ "EGameState::Playing", (int64)EGameState::Playing },
				{ "EGameState::Paused", (int64)EGameState::Paused },
				{ "EGameState::GameOver", (int64)EGameState::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enum to track the current state of the game \n" },
				{ "GameOver.DisplayName", "GameOver" },
				{ "GameOver.Name", "EGameState::GameOver" },
				{ "ModuleRelativePath", "TantrumGameModeBase.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EGameState::None" },
				{ "Paused.DisplayName", "Paused" },
				{ "Paused.Name", "EGameState::Paused" },
				{ "Playing.DisplayName", "Playing" },
				{ "Playing.Name", "EGameState::Playing" },
				{ "ToolTip", "Enum to track the current state of the game" },
				{ "Waiting.DisplayName", "Waiting" },
				{ "Waiting.Name", "EGameState::Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tantrum,
				nullptr,
				"EGameState",
				"EGameState",
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
	DEFINE_FUNCTION(ATantrumGameModeBase::execGetCurrentGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameState*)Z_Param__Result=P_THIS->GetCurrentGameState();
		P_NATIVE_END;
	}
	void ATantrumGameModeBase::StaticRegisterNativesATantrumGameModeBase()
	{
		UClass* Class = ATantrumGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentGameState", &ATantrumGameModeBase::execGetCurrentGameState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics
	{
		struct TantrumGameModeBase_eventGetCurrentGameState_Parms
		{
			EGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumGameModeBase_eventGetCurrentGameState_Parms, ReturnValue), Z_Construct_UEnum_Tantrum_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumGameModeBase, nullptr, "GetCurrentGameState", nullptr, nullptr, sizeof(TantrumGameModeBase_eventGetCurrentGameState_Parms), Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumGameModeBase_NoRegister()
	{
		return ATantrumGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGameState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCountdownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameCountdownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToRescuePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToRescuePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumGameModeBase_GetCurrentGameState, "GetCurrentGameState" }, // 3793745149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumGameModeBase.h" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "// Create and set CurrentGameState to NONE. This will be tracked in the code file. \n" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ToolTip", "Create and set CurrentGameState to NONE. This will be tracked in the code file." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState = { "CurrentGameState", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumGameModeBase, CurrentGameState), Z_Construct_UEnum_Tantrum_EGameState, METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameCountdownDuration_MetaData[] = {
		{ "Category", "Game Details" },
		{ "Comment", "// Countdown before gameplay state begins. Exposed so we can easily change this in BP editor. \n" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ToolTip", "Countdown before gameplay state begins. Exposed so we can easily change this in BP editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameCountdownDuration = { "GameCountdownDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumGameModeBase, GameCountdownDuration), METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameCountdownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameCountdownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidget = { "GameWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumGameModeBase, GameWidget), Z_Construct_UClass_UTantrumGameWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "// Object we'll be creating and adding to the Viewport\n" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ToolTip", "Object we'll be creating and adding to the Viewport" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumGameModeBase, GameWidgetClass), Z_Construct_UClass_UTantrumGameWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_TimeToRescuePlayer_MetaData[] = {
		{ "Category", "KillZ" },
		{ "Comment", "//Set to true when he hits KillZ\n" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ToolTip", "Set to true when he hits KillZ" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_TimeToRescuePlayer = { "TimeToRescuePlayer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumGameModeBase, TimeToRescuePlayer), METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_TimeToRescuePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_TimeToRescuePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_KillZ_MetaData[] = {
		{ "Category", "KillZ" },
		{ "Comment", "//Set time that takes to put Player back in Ground\n" },
		{ "ModuleRelativePath", "TantrumGameModeBase.h" },
		{ "ToolTip", "Set time that takes to put Player back in Ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_KillZ = { "KillZ", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumGameModeBase, KillZ), METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_KillZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_KillZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_CurrentGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameCountdownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_GameWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_TimeToRescuePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumGameModeBase_Statics::NewProp_KillZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumGameModeBase_Statics::ClassParams = {
		&ATantrumGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumGameModeBase, 1594531645);
	template<> TANTRUM_API UClass* StaticClass<ATantrumGameModeBase>()
	{
		return ATantrumGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumGameModeBase(Z_Construct_UClass_ATantrumGameModeBase, &ATantrumGameModeBase::StaticClass, TEXT("/Script/Tantrum"), TEXT("ATantrumGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

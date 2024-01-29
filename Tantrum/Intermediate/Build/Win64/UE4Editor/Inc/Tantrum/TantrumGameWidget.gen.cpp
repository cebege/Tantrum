// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumGameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumGameWidget() {}
// Cross Module References
	TANTRUM_API UClass* Z_Construct_UClass_UTantrumGameWidget_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_UTantrumGameWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tantrum();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumGameModeBase_NoRegister();
// End Cross Module References
	static FName NAME_UTantrumGameWidget_LevelComplete = FName(TEXT("LevelComplete"));
	void UTantrumGameWidget::LevelComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTantrumGameWidget_LevelComplete),NULL);
	}
	static FName NAME_UTantrumGameWidget_StartCountdown = FName(TEXT("StartCountdown"));
	void UTantrumGameWidget::StartCountdown(float CountdownTime, ATantrumGameModeBase* GameMode)
	{
		TantrumGameWidget_eventStartCountdown_Parms Parms;
		Parms.CountdownTime=CountdownTime;
		Parms.GameMode=GameMode;
		ProcessEvent(FindFunctionChecked(NAME_UTantrumGameWidget_StartCountdown),&Parms);
	}
	void UTantrumGameWidget::StaticRegisterNativesUTantrumGameWidget()
	{
	}
	struct Z_Construct_UFunction_UTantrumGameWidget_LevelComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumGameWidget_LevelComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumGameWidget_LevelComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumGameWidget, nullptr, "LevelComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumGameWidget_LevelComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumGameWidget_LevelComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumGameWidget_LevelComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumGameWidget_LevelComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CountdownTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumGameWidget_eventStartCountdown_Parms, CountdownTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumGameWidget_eventStartCountdown_Parms, GameMode), Z_Construct_UClass_ATantrumGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::NewProp_CountdownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::NewProp_GameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumGameWidget, nullptr, "StartCountdown", nullptr, nullptr, sizeof(TantrumGameWidget_eventStartCountdown_Parms), Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumGameWidget_StartCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumGameWidget_StartCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTantrumGameWidget_NoRegister()
	{
		return UTantrumGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTantrumGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTantrumGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTantrumGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTantrumGameWidget_LevelComplete, "LevelComplete" }, // 1106724182
		{ &Z_Construct_UFunction_UTantrumGameWidget_StartCountdown, "StartCountdown" }, // 502542781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTantrumGameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TantrumGameWidget.h" },
		{ "ModuleRelativePath", "TantrumGameWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTantrumGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTantrumGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTantrumGameWidget_Statics::ClassParams = {
		&UTantrumGameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTantrumGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTantrumGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTantrumGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTantrumGameWidget, 444236304);
	template<> TANTRUM_API UClass* StaticClass<UTantrumGameWidget>()
	{
		return UTantrumGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTantrumGameWidget(Z_Construct_UClass_UTantrumGameWidget, &UTantrumGameWidget::StaticClass, TEXT("/Script/Tantrum"), TEXT("UTantrumGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTantrumGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

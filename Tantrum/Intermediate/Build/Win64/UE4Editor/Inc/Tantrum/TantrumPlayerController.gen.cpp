// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumPlayerController() {}
// Cross Module References
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumPlayerController_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tantrum();
// End Cross Module References
	void ATantrumPlayerController::StaticRegisterNativesATantrumPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATantrumPlayerController_NoRegister()
	{
		return ATantrumPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookRightRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookRightRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumPlayerController.h" },
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"Movement\")\n//\x09""float TurnSpeed = 450.0f;\n" },
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Movement\")\n       float TurnSpeed = 450.0f;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumPlayerController, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate = { "BaseLookRightRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumPlayerController, BaseLookRightRate), METADATA_PARAMS(Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumPlayerController_Statics::ClassParams = {
		&ATantrumPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumPlayerController, 53005738);
	template<> TANTRUM_API UClass* StaticClass<ATantrumPlayerController>()
	{
		return ATantrumPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumPlayerController(Z_Construct_UClass_ATantrumPlayerController, &ATantrumPlayerController::StaticClass, TEXT("/Script/Tantrum"), TEXT("ATantrumPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

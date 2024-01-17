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
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister();
	TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Tantrum();
// End Cross Module References
	void ATantrumCharacterBase::StaticRegisterNativesATantrumCharacterBase()
	{
	}
	UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister()
	{
		return ATantrumCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinImpactSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinImpactSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxImpactSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxImpactSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TantrumCharacterBase.h" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Impact Attributes:\n" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
		{ "ToolTip", "Impact Attributes:" },
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams = {
		&ATantrumCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ATantrumCharacterBase, 857720873);
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

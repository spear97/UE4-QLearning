// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaFighter/AI_Fighter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Fighter() {}
// Cross Module References
	ARENAFIGHTER_API UClass* Z_Construct_UClass_AAI_Fighter_NoRegister();
	ARENAFIGHTER_API UClass* Z_Construct_UClass_AAI_Fighter();
	ARENAFIGHTER_API UClass* Z_Construct_UClass_AFighterCharacter();
	UPackage* Z_Construct_UPackage__Script_ArenaFighter();
// End Cross Module References
	void AAI_Fighter::StaticRegisterNativesAAI_Fighter()
	{
	}
	UClass* Z_Construct_UClass_AAI_Fighter_NoRegister()
	{
		return AAI_Fighter::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Fighter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Fighter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFighterCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Fighter.h" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Fighter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Fighter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Fighter_Statics::ClassParams = {
		&AAI_Fighter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Fighter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Fighter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Fighter, 1021282537);
	template<> ARENAFIGHTER_API UClass* StaticClass<AAI_Fighter>()
	{
		return AAI_Fighter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Fighter(Z_Construct_UClass_AAI_Fighter, &AAI_Fighter::StaticClass, TEXT("/Script/ArenaFighter"), TEXT("AAI_Fighter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Fighter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

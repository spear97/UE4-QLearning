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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAI_Fighter::execGetNextAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stateIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_actionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNextAction(Z_Param_stateIndex,Z_Param_actionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_Fighter::execGetQValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stateIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_curr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetQValue(Z_Param_stateIndex,Z_Param_curr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_Fighter::execAttack4)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack4();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_Fighter::execAttack3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_Fighter::execAttack2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_Fighter::execAttack1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack1();
		P_NATIVE_END;
	}
	void AAI_Fighter::StaticRegisterNativesAAI_Fighter()
	{
		UClass* Class = AAI_Fighter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack1", &AAI_Fighter::execAttack1 },
			{ "Attack2", &AAI_Fighter::execAttack2 },
			{ "Attack3", &AAI_Fighter::execAttack3 },
			{ "Attack4", &AAI_Fighter::execAttack4 },
			{ "GetNextAction", &AAI_Fighter::execGetNextAction },
			{ "GetQValue", &AAI_Fighter::execGetQValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_Fighter_Attack1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Fighter_Attack1_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "//Single Attack\n" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
		{ "ToolTip", "Single Attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Fighter_Attack1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Fighter, nullptr, "Attack1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Fighter_Attack1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_Attack1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Fighter_Attack1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Fighter_Attack1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_Fighter_Attack2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Fighter_Attack2_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "//Two Attacks\n" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
		{ "ToolTip", "Two Attacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Fighter_Attack2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Fighter, nullptr, "Attack2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Fighter_Attack2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_Attack2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Fighter_Attack2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Fighter_Attack2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_Fighter_Attack3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Fighter_Attack3_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "//Three Attacks\n" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
		{ "ToolTip", "Three Attacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Fighter_Attack3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Fighter, nullptr, "Attack3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Fighter_Attack3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_Attack3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Fighter_Attack3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Fighter_Attack3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_Fighter_Attack4_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Fighter_Attack4_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "//Four Attacks\n" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
		{ "ToolTip", "Four Attacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Fighter_Attack4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Fighter, nullptr, "Attack4", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Fighter_Attack4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_Attack4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Fighter_Attack4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Fighter_Attack4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics
	{
		struct AI_Fighter_eventGetNextAction_Parms
		{
			int32 stateIndex;
			int32 actionIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_stateIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_actionIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::NewProp_stateIndex = { "stateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Fighter_eventGetNextAction_Parms, stateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::NewProp_actionIndex = { "actionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Fighter_eventGetNextAction_Parms, actionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Fighter_eventGetNextAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::NewProp_stateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::NewProp_actionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Fighter, nullptr, "GetNextAction", nullptr, nullptr, sizeof(AI_Fighter_eventGetNextAction_Parms), Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Fighter_GetNextAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Fighter_GetNextAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics
	{
		struct AI_Fighter_eventGetQValue_Parms
		{
			int32 stateIndex;
			float curr;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_stateIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_curr;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::NewProp_stateIndex = { "stateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Fighter_eventGetQValue_Parms, stateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::NewProp_curr = { "curr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Fighter_eventGetQValue_Parms, curr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Fighter_eventGetQValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::NewProp_stateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::NewProp_curr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Q-Learning" },
		{ "Comment", "//Returns the Highest Value from Values for the given State\n" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
		{ "ToolTip", "Returns the Highest Value from Values for the given State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Fighter, nullptr, "GetQValue", nullptr, nullptr, sizeof(AI_Fighter_eventGetQValue_Parms), Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Fighter_GetQValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Fighter_GetQValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_Fighter_NoRegister()
	{
		return AAI_Fighter::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Fighter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Moving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Fighter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFighterCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaFighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_Fighter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_Fighter_Attack1, "Attack1" }, // 52480945
		{ &Z_Construct_UFunction_AAI_Fighter_Attack2, "Attack2" }, // 4072628609
		{ &Z_Construct_UFunction_AAI_Fighter_Attack3, "Attack3" }, // 717327309
		{ &Z_Construct_UFunction_AAI_Fighter_Attack4, "Attack4" }, // 3851853306
		{ &Z_Construct_UFunction_AAI_Fighter_GetNextAction, "GetNextAction" }, // 2967949637
		{ &Z_Construct_UFunction_AAI_Fighter_GetQValue, "GetQValue" }, // 3573261354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Fighter.h" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/*Variables*/" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues_Inner = { "DataValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues = { "DataValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, DataValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Data), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Reward_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Reward), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Reward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, State), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Action), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Idle_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Idle), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Moving_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, Moving), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Moving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Moving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Fighter_Statics::NewProp_MaxIndex_MetaData[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "AI_Fighter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAI_Fighter_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Fighter, MaxIndex), METADATA_PARAMS(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_MaxIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::NewProp_MaxIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Fighter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_DataValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Reward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_Moving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Fighter_Statics::NewProp_MaxIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Fighter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Fighter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Fighter_Statics::ClassParams = {
		&AAI_Fighter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_Fighter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Fighter_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AAI_Fighter, 4183774459);
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

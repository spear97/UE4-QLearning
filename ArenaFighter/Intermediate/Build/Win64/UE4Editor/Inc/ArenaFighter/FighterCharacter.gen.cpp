// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaFighter/FighterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFighterCharacter() {}
// Cross Module References
	ARENAFIGHTER_API UClass* Z_Construct_UClass_AFighterCharacter_NoRegister();
	ARENAFIGHTER_API UClass* Z_Construct_UClass_AFighterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ArenaFighter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AFighterCharacter::execComboReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComboReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execSaveMultiAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveMultiAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execSaveTwoAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveTwoAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execRangedAttacks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RangedAttacks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execMeleeAttacks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeAttacks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execStopRoll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRoll(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execUpdateLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execStopLeap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLeap(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execLeap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Leap(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execRoll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Roll(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execMultiStringCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiStringCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execDamageGenerator)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->DamageGenerator(Z_Param_min,Z_Param_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execStopAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execStartAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFighterCharacter::execUpdateCapsuleLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCapsuleLocation();
		P_NATIVE_END;
	}
	void AFighterCharacter::StaticRegisterNativesAFighterCharacter()
	{
		UClass* Class = AFighterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComboReset", &AFighterCharacter::execComboReset },
			{ "DamageGenerator", &AFighterCharacter::execDamageGenerator },
			{ "Leap", &AFighterCharacter::execLeap },
			{ "MeleeAttacks", &AFighterCharacter::execMeleeAttacks },
			{ "MultiStringCombo", &AFighterCharacter::execMultiStringCombo },
			{ "RangedAttacks", &AFighterCharacter::execRangedAttacks },
			{ "Roll", &AFighterCharacter::execRoll },
			{ "SaveMultiAttack", &AFighterCharacter::execSaveMultiAttack },
			{ "SaveTwoAttack", &AFighterCharacter::execSaveTwoAttack },
			{ "StartAbility", &AFighterCharacter::execStartAbility },
			{ "StopAbility", &AFighterCharacter::execStopAbility },
			{ "StopLeap", &AFighterCharacter::execStopLeap },
			{ "StopRoll", &AFighterCharacter::execStopRoll },
			{ "UpdateCapsuleLocation", &AFighterCharacter::execUpdateCapsuleLocation },
			{ "UpdateLocation", &AFighterCharacter::execUpdateLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFighterCharacter_ComboReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_ComboReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Resets Combo back to start up the current attack animation ending\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Resets Combo back to start up the current attack animation ending" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_ComboReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "ComboReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_ComboReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_ComboReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_ComboReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_ComboReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics
	{
		struct FighterCharacter_eventDamageGenerator_Parms
		{
			float min;
			float max;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventDamageGenerator_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventDamageGenerator_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventDamageGenerator_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::NewProp_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "DamageGenerator", nullptr, nullptr, sizeof(FighterCharacter_eventDamageGenerator_Parms), Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_DamageGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_DamageGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_Leap_Statics
	{
		struct FighterCharacter_eventLeap_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFighterCharacter_Leap_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventLeap_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFighterCharacter_Leap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_Leap_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_Leap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Allows Character to Evade Attacks that they are predicting\n//Disables all other Character Input Events during this Event\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Allows Character to Evade Attacks that they are predicting\nDisables all other Character Input Events during this Event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_Leap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "Leap", nullptr, nullptr, sizeof(FighterCharacter_eventLeap_Parms), Z_Construct_UFunction_AFighterCharacter_Leap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_Leap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_Leap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_Leap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_Leap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_Leap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_MeleeAttacks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_MeleeAttacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Handles Melee Attacks\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Handles Melee Attacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_MeleeAttacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "MeleeAttacks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_MeleeAttacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_MeleeAttacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_MeleeAttacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_MeleeAttacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_MultiStringCombo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_MultiStringCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_MultiStringCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "MultiStringCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_MultiStringCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_MultiStringCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_MultiStringCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_MultiStringCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_RangedAttacks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_RangedAttacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Handles Ranged Attacks\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Handles Ranged Attacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_RangedAttacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "RangedAttacks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_RangedAttacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_RangedAttacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_RangedAttacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_RangedAttacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_Roll_Statics
	{
		struct FighterCharacter_eventRoll_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFighterCharacter_Roll_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventRoll_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFighterCharacter_Roll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_Roll_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_Roll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Allows Character to Evade Attacks that they are predicting\n//Disables all other Character Input Events during this Event\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Allows Character to Evade Attacks that they are predicting\nDisables all other Character Input Events during this Event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_Roll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "Roll", nullptr, nullptr, sizeof(FighterCharacter_eventRoll_Parms), Z_Construct_UFunction_AFighterCharacter_Roll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_Roll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_Roll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_Roll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_Roll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_Roll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Allows for Multiple Combo Animations to be handles sequential\n//On after another\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Allows for Multiple Combo Animations to be handles sequential\nOn after another" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "SaveMultiAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Allows for Two Combo Animations to be handles sequential\n//On after another\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Allows for Two Combo Animations to be handles sequential\nOn after another" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "SaveTwoAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_StartAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_StartAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Enables the Use of using Controller Yaw when called \n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Enables the Use of using Controller Yaw when called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_StartAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "StartAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_StartAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_StartAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_StartAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_StartAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_StopAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_StopAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Disables the Use of using Controller Yaw when called \n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Disables the Use of using Controller Yaw when called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_StopAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "StopAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_StopAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_StopAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_StopAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_StopAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics
	{
		struct FighterCharacter_eventStopLeap_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventStopLeap_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "StopLeap", nullptr, nullptr, sizeof(FighterCharacter_eventStopLeap_Parms), Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_StopLeap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_StopLeap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics
	{
		struct FighterCharacter_eventStopRoll_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FighterCharacter_eventStopRoll_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Ends Roll Event, and Enables other Input Events to occur once again\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Ends Roll Event, and Enables other Input Events to occur once again" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "StopRoll", nullptr, nullptr, sizeof(FighterCharacter_eventStopRoll_Parms), Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_StopRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_StopRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Allows for the Capsule Component to Update for Each Tick when Character in Ragdoll\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Allows for the Capsule Component to Update for Each Tick when Character in Ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "UpdateCapsuleLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFighterCharacter_UpdateLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFighterCharacter_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Updates Location of Character which they are rolling\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Updates Location of Character which they are rolling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighterCharacter_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFighterCharacter, nullptr, "UpdateLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFighterCharacter_UpdateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFighterCharacter_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFighterCharacter_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFighterCharacter_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFighterCharacter_NoRegister()
	{
		return AFighterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFighterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WayPointRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WayPointRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRolling_MetaData[];
#endif
		static void NewProp_isRolling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ragdoll_MetaData[];
#endif
		static void NewProp_ragdoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ragdoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFighterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaFighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFighterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFighterCharacter_ComboReset, "ComboReset" }, // 1386834655
		{ &Z_Construct_UFunction_AFighterCharacter_DamageGenerator, "DamageGenerator" }, // 1793825161
		{ &Z_Construct_UFunction_AFighterCharacter_Leap, "Leap" }, // 1813096195
		{ &Z_Construct_UFunction_AFighterCharacter_MeleeAttacks, "MeleeAttacks" }, // 2946039363
		{ &Z_Construct_UFunction_AFighterCharacter_MultiStringCombo, "MultiStringCombo" }, // 3807191924
		{ &Z_Construct_UFunction_AFighterCharacter_RangedAttacks, "RangedAttacks" }, // 2714917844
		{ &Z_Construct_UFunction_AFighterCharacter_Roll, "Roll" }, // 276115102
		{ &Z_Construct_UFunction_AFighterCharacter_SaveMultiAttack, "SaveMultiAttack" }, // 3599407442
		{ &Z_Construct_UFunction_AFighterCharacter_SaveTwoAttack, "SaveTwoAttack" }, // 586326389
		{ &Z_Construct_UFunction_AFighterCharacter_StartAbility, "StartAbility" }, // 608232280
		{ &Z_Construct_UFunction_AFighterCharacter_StopAbility, "StopAbility" }, // 678201116
		{ &Z_Construct_UFunction_AFighterCharacter_StopLeap, "StopLeap" }, // 81958565
		{ &Z_Construct_UFunction_AFighterCharacter_StopRoll, "StopRoll" }, // 1043726995
		{ &Z_Construct_UFunction_AFighterCharacter_UpdateCapsuleLocation, "UpdateCapsuleLocation" }, // 1937264407
		{ &Z_Construct_UFunction_AFighterCharacter_UpdateLocation, "UpdateLocation" }, // 3195579989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FighterCharacter.h" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/*************************************************************/" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, A), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "//First Attack\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "First Attack" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, B), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_C_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "//Second Attack\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Second Attack" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, C), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_D_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "//Third Attack\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Third Attack" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, D), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_R_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/*************************************************************/" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, R), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CurrHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//The LookUpRate for Controllers\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "The LookUpRate for Controllers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CurrHealth = { "CurrHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, CurrHealth), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CurrHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CurrHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//Curr Health of Character\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Curr Health of Character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MinDamage_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//Maximum Health of Character\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Maximum Health of Character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MinDamage = { "MinDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, MinDamage), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MinDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MinDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxDamage_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//Curr Health of Character\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Curr Health of Character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxDamage = { "MaxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, MaxDamage), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FireRange_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Curr Health of Character\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Curr Health of Character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, FireRange), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FireRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FireRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_WayPointRange_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_WayPointRange = { "WayPointRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, WayPointRange), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_WayPointRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_WayPointRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((AFighterCharacter*)Obj)->isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFighterCharacter), &Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling_SetBit(void* Obj)
	{
		((AFighterCharacter*)Obj)->isRolling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling = { "isRolling", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFighterCharacter), &Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Determine if Character is Rollin\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "Determine if Character is Rollin" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, BoneName), METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_StartingPoint_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "//The Name of the Bone that will be used for Ragdoll\n" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
		{ "ToolTip", "The Name of the Bone that will be used for Ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_StartingPoint = { "StartingPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, StartingPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_StartingPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_StartingPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFighterCharacter, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ShootDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FighterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll_SetBit(void* Obj)
	{
		((AFighterCharacter*)Obj)->ragdoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll = { "ragdoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFighterCharacter), &Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFighterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_CurrHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MinDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_MaxDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_FireRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_WayPointRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_isRolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_StartingPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ShootDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighterCharacter_Statics::NewProp_ragdoll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFighterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFighterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFighterCharacter_Statics::ClassParams = {
		&AFighterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFighterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFighterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFighterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFighterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFighterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFighterCharacter, 2827620313);
	template<> ARENAFIGHTER_API UClass* StaticClass<AFighterCharacter>()
	{
		return AFighterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFighterCharacter(Z_Construct_UClass_AFighterCharacter, &AFighterCharacter::StaticClass, TEXT("/Script/ArenaFighter"), TEXT("AFighterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFighterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

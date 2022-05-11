// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENAFIGHTER_FighterCharacter_generated_h
#error "FighterCharacter.generated.h already included, missing '#pragma once' in FighterCharacter.h"
#endif
#define ARENAFIGHTER_FighterCharacter_generated_h

#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_SPARSE_DATA
#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComboReset); \
	DECLARE_FUNCTION(execSaveMultiAttack); \
	DECLARE_FUNCTION(execSaveTwoAttack); \
	DECLARE_FUNCTION(execRangedAttacks); \
	DECLARE_FUNCTION(execMeleeAttacks); \
	DECLARE_FUNCTION(execStopRoll); \
	DECLARE_FUNCTION(execUpdateLocation); \
	DECLARE_FUNCTION(execStopLeap); \
	DECLARE_FUNCTION(execLeap); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execMultiStringCombo); \
	DECLARE_FUNCTION(execDamageGenerator); \
	DECLARE_FUNCTION(execStopAbility); \
	DECLARE_FUNCTION(execStartAbility); \
	DECLARE_FUNCTION(execUpdateCapsuleLocation);


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComboReset); \
	DECLARE_FUNCTION(execSaveMultiAttack); \
	DECLARE_FUNCTION(execSaveTwoAttack); \
	DECLARE_FUNCTION(execRangedAttacks); \
	DECLARE_FUNCTION(execMeleeAttacks); \
	DECLARE_FUNCTION(execStopRoll); \
	DECLARE_FUNCTION(execUpdateLocation); \
	DECLARE_FUNCTION(execStopLeap); \
	DECLARE_FUNCTION(execLeap); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execMultiStringCombo); \
	DECLARE_FUNCTION(execDamageGenerator); \
	DECLARE_FUNCTION(execStopAbility); \
	DECLARE_FUNCTION(execStartAbility); \
	DECLARE_FUNCTION(execUpdateCapsuleLocation);


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFighterCharacter(); \
	friend struct Z_Construct_UClass_AFighterCharacter_Statics; \
public: \
	DECLARE_CLASS(AFighterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaFighter"), NO_API) \
	DECLARE_SERIALIZER(AFighterCharacter)


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFighterCharacter(); \
	friend struct Z_Construct_UClass_AFighterCharacter_Statics; \
public: \
	DECLARE_CLASS(AFighterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaFighter"), NO_API) \
	DECLARE_SERIALIZER(AFighterCharacter)


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFighterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFighterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFighterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFighterCharacter(AFighterCharacter&&); \
	NO_API AFighterCharacter(const AFighterCharacter&); \
public:


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFighterCharacter(AFighterCharacter&&); \
	NO_API AFighterCharacter(const AFighterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFighterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFighterCharacter)


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFighterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFighterCharacter, FollowCamera); }


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_21_PROLOG
#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_SPARSE_DATA \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_RPC_WRAPPERS \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_INCLASS \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_SPARSE_DATA \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_INCLASS_NO_PURE_DECLS \
	ArenaFighter_Source_ArenaFighter_FighterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENAFIGHTER_API UClass* StaticClass<class AFighterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaFighter_Source_ArenaFighter_FighterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

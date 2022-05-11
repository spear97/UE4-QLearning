// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENAFIGHTER_AI_Fighter_generated_h
#error "AI_Fighter.generated.h already included, missing '#pragma once' in AI_Fighter.h"
#endif
#define ARENAFIGHTER_AI_Fighter_generated_h

#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_SPARSE_DATA
#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextAction); \
	DECLARE_FUNCTION(execGetQValue); \
	DECLARE_FUNCTION(execAttack4); \
	DECLARE_FUNCTION(execAttack3); \
	DECLARE_FUNCTION(execAttack2); \
	DECLARE_FUNCTION(execAttack1);


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextAction); \
	DECLARE_FUNCTION(execGetQValue); \
	DECLARE_FUNCTION(execAttack4); \
	DECLARE_FUNCTION(execAttack3); \
	DECLARE_FUNCTION(execAttack2); \
	DECLARE_FUNCTION(execAttack1);


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_Fighter(); \
	friend struct Z_Construct_UClass_AAI_Fighter_Statics; \
public: \
	DECLARE_CLASS(AAI_Fighter, AFighterCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaFighter"), NO_API) \
	DECLARE_SERIALIZER(AAI_Fighter)


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAI_Fighter(); \
	friend struct Z_Construct_UClass_AAI_Fighter_Statics; \
public: \
	DECLARE_CLASS(AAI_Fighter, AFighterCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaFighter"), NO_API) \
	DECLARE_SERIALIZER(AAI_Fighter)


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_Fighter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_Fighter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Fighter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Fighter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Fighter(AAI_Fighter&&); \
	NO_API AAI_Fighter(const AAI_Fighter&); \
public:


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Fighter(AAI_Fighter&&); \
	NO_API AAI_Fighter(const AAI_Fighter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Fighter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Fighter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_Fighter)


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_PRIVATE_PROPERTY_OFFSET
#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_12_PROLOG
#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_SPARSE_DATA \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_RPC_WRAPPERS \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_INCLASS \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_SPARSE_DATA \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_INCLASS_NO_PURE_DECLS \
	ArenaFighter_Source_ArenaFighter_AI_Fighter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENAFIGHTER_API UClass* StaticClass<class AAI_Fighter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaFighter_Source_ArenaFighter_AI_Fighter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

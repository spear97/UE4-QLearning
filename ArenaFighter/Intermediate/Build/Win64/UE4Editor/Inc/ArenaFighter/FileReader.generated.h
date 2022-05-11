// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENAFIGHTER_FileReader_generated_h
#error "FileReader.generated.h already included, missing '#pragma once' in FileReader.h"
#endif
#define ARENAFIGHTER_FileReader_generated_h

#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_SPARSE_DATA
#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTxt); \
	DECLARE_FUNCTION(execLoadTxt);


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTxt); \
	DECLARE_FUNCTION(execLoadTxt);


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileReader(); \
	friend struct Z_Construct_UClass_UFileReader_Statics; \
public: \
	DECLARE_CLASS(UFileReader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaFighter"), NO_API) \
	DECLARE_SERIALIZER(UFileReader)


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFileReader(); \
	friend struct Z_Construct_UClass_UFileReader_Statics; \
public: \
	DECLARE_CLASS(UFileReader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaFighter"), NO_API) \
	DECLARE_SERIALIZER(UFileReader)


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileReader(UFileReader&&); \
	NO_API UFileReader(const UFileReader&); \
public:


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileReader(UFileReader&&); \
	NO_API UFileReader(const UFileReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileReader)


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_PRIVATE_PROPERTY_OFFSET
#define ArenaFighter_Source_ArenaFighter_FileReader_h_12_PROLOG
#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_SPARSE_DATA \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_RPC_WRAPPERS \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_INCLASS \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaFighter_Source_ArenaFighter_FileReader_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_SPARSE_DATA \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_INCLASS_NO_PURE_DECLS \
	ArenaFighter_Source_ArenaFighter_FileReader_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENAFIGHTER_API UClass* StaticClass<class UFileReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaFighter_Source_ArenaFighter_FileReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

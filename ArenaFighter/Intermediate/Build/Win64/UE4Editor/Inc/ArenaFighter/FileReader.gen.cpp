// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaFighter/FileReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileReader() {}
// Cross Module References
	ARENAFIGHTER_API UClass* Z_Construct_UClass_UFileReader_NoRegister();
	ARENAFIGHTER_API UClass* Z_Construct_UClass_UFileReader();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ArenaFighter();
// End Cross Module References
	DEFINE_FUNCTION(UFileReader::execSaveTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveText);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileReader::SaveTxt(Z_Param_SaveText,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileReader::execLoadTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileReader::LoadTxt(Z_Param_FileName,Z_Param_Out_SaveText);
		P_NATIVE_END;
	}
	void UFileReader::StaticRegisterNativesUFileReader()
	{
		UClass* Class = UFileReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTxt", &UFileReader::execLoadTxt },
			{ "SaveTxt", &UFileReader::execSaveTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileReader_LoadTxt_Statics
	{
		struct FileReader_eventLoadTxt_Parms
		{
			FString FileName;
			FString SaveText;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileReader_eventLoadTxt_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileReader_eventLoadTxt_Parms, SaveText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileReader_eventLoadTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileReader_eventLoadTxt_Parms), &Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileReader_LoadTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileReader_LoadTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileReader_LoadTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "Keywords", "Load Text File" },
		{ "ModuleRelativePath", "FileReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileReader_LoadTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileReader, nullptr, "LoadTxt", nullptr, nullptr, sizeof(FileReader_eventLoadTxt_Parms), Z_Construct_UFunction_UFileReader_LoadTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileReader_LoadTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileReader_LoadTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileReader_LoadTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileReader_LoadTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileReader_LoadTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileReader_SaveTxt_Statics
	{
		struct FileReader_eventSaveTxt_Parms
		{
			FString SaveText;
			FString FileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileReader_eventSaveTxt_Parms, SaveText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileReader_eventSaveTxt_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileReader_eventSaveTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileReader_eventSaveTxt_Parms), &Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileReader_SaveTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileReader_SaveTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileReader_SaveTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "Keywords", "Save Text File" },
		{ "ModuleRelativePath", "FileReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileReader_SaveTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileReader, nullptr, "SaveTxt", nullptr, nullptr, sizeof(FileReader_eventSaveTxt_Parms), Z_Construct_UFunction_UFileReader_SaveTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileReader_SaveTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileReader_SaveTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileReader_SaveTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileReader_SaveTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileReader_SaveTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileReader_NoRegister()
	{
		return UFileReader::StaticClass();
	}
	struct Z_Construct_UClass_UFileReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaFighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileReader_LoadTxt, "LoadTxt" }, // 3733666902
		{ &Z_Construct_UFunction_UFileReader_SaveTxt, "SaveTxt" }, // 3331553013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileReader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FileReader.h" },
		{ "ModuleRelativePath", "FileReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileReader_Statics::ClassParams = {
		&UFileReader::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileReader, 1864670994);
	template<> ARENAFIGHTER_API UClass* StaticClass<UFileReader>()
	{
		return UFileReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileReader(Z_Construct_UClass_UFileReader, &UFileReader::StaticClass, TEXT("/Script/ArenaFighter"), TEXT("UFileReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileReader.generated.h"

/**
 * 
 */
UCLASS()
class ARENAFIGHTER_API UFileReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "File I/O", meta = (Keywords = "Load Text File"))
		static bool LoadTxt(FString FileName, FString& SaveText);

	UFUNCTION(BlueprintCallable, Category = "File I/O", meta = (Keywords = "Save Text File"))
		static bool SaveTxt(FString SaveText, FString FileName);
};

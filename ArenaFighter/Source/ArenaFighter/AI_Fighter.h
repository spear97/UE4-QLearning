// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FighterCharacter.h"
#include "AI_Fighter.generated.h"

/**
 * 
 */
UCLASS()
class ARENAFIGHTER_API AAI_Fighter : public AFighterCharacter
{
	GENERATED_BODY()

public:

	AAI_Fighter();

	/*Variables*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		TArray<AActor*> Enemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
		TArray<float> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
		TArray<FString> DataValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
		FString  Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
		float Reward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
		int State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
		int Action;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Q-Learning")
		int Idle = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Q-Learning")
		int Moving = 8;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Q-Learning")
		int MaxIndex = -1;

	//Single Attack
	UFUNCTION(BlueprintCallable, Category = "AI")
		void Attack1();

	//Two Attacks
	UFUNCTION(BlueprintCallable, Category = "AI")
		void Attack2();

	//Three Attacks
	UFUNCTION(BlueprintCallable, Category = "AI")
		void Attack3();

	//Four Attacks
	UFUNCTION(BlueprintCallable, Category = "AI")
		void Attack4();

	//Returns the Highest Value from Values for the given State
	UFUNCTION(BlueprintPure, Category = "Q-Learning")
		float GetQValue(int stateIndex, float curr);

	UFUNCTION(BlueprintPure, Category = "Q-Learning")
		int GetNextAction(int stateIndex, int actionIndex);

private:

	/*Variables*/

	//Learning Rate
	const float alpha = 0.9f;

	//Factor Discount
	const float gamma = 0.75f;

	/*Handles Attack Functionality for AI*/

	//Get the Maximum Value
	float GetMax(int stateIndex);
	
};

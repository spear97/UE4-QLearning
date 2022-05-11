// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "GameplayTagContainer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "FighterCharacter.generated.h"

UCLASS(config = Game)
class AFighterCharacter : public ACharacter
{
	GENERATED_BODY()

		/**************************************************************/
		// Camera and Spring Arm Components
		/*************************************************************/

		/** Camera boom positioning the camera behind the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;


public:
	/**************************************************************/
	// Montage Animations to allow for attack
	/*************************************************************/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
		UAnimMontage* A; //First Attack

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
		UAnimMontage* B; //Second Attack

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
		UAnimMontage* C; //Third Attack

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
		UAnimMontage* D; //Fourth Attack

	/**************************************************************/
	// Montage Animations to allow for roll
	/*************************************************************/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
		UAnimMontage* R; //Roll Attack


public:
	AFighterCharacter();

	/*************************************************************/
	// Blueprint Accessible Variables and Objects
	/*************************************************************/

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate; //The TurnRate for Controllers

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate; //The LookUpRate for Controllers

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float CurrHealth = 500.f; //Curr Health of Character

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
		float MaxHealth = 500.f; //Maximum Health of Character

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float MinDamage = 25.f; //Curr Health of Character

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float MaxDamage = 50.f; //Curr Health of Character

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		float FireRange = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		float WayPointRange = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
		bool isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gameplay")
		bool isRolling = false; //Determine if Character is Rollin

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		FName BoneName; //The Name of the Bone that will be used for Ragdoll

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics")
		FVector StartingPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		FVector ShootDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool ragdoll; //Determine if Character is ragdolling

	/*************************************************************/
	// Blueprint Accessible Functions
	/*************************************************************/

	//Allows for the Capsule Component to Update for Each Tick when Character in Ragdoll
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void UpdateCapsuleLocation();

	//Enables the Use of using Controller Yaw when called 
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void StartAbility();

	//Disables the Use of using Controller Yaw when called 
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void StopAbility();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		float DamageGenerator(float min, float max);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void MultiStringCombo();

	//Allows Character to Evade Attacks that they are predicting
	//Disables all other Character Input Events during this Event
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void Roll(int index);

	//Allows Character to Evade Attacks that they are predicting
	//Disables all other Character Input Events during this Event
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void Leap(int index);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void StopLeap(int index);

	//Updates Location of Character which they are rolling
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void UpdateLocation();

	//Ends Roll Event, and Enables other Input Events to occur once again
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void StopRoll(int index);

	//Handles Melee Attacks
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void MeleeAttacks();

	//Handles Ranged Attacks
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void RangedAttacks();

	//Allows for Two Combo Animations to be handles sequential
	//On after another
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void SaveTwoAttack();

	//Allows for Multiple Combo Animations to be handles sequential
	//On after another
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void SaveMultiAttack();

	//Resets Combo back to start up the current attack animation ending
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void ComboReset();

private:

	/*************************************************************/
	// Private Variables and Objects
	/*************************************************************/

	int AttackIndex = 0; //Index for Which Montage Animation will need to play
	bool saveAttack; //Used for helping to manage Combo Attacks

	/*************************************************************/
	// Private Functions
	/*************************************************************/

	//Allows for Two Combos to play instead of multiple
	void TwoStringCombo();

protected:

	/*************************************************************/
	// Protected Functions
	/*************************************************************/

	//What occurs when Character is first Spawned?
	virtual void BeginPlay() override;

	//What occurs for each frame?
	virtual void Tick(float deltaSeconds) override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	//Called via input to Turn Left and Right at a given rate.
	void Turn(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	//Called via input to look up/down at a given rate.
	void LookUp(float Rate);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
// Copyright Epic Games, Inc.All Rights Reserved.

#include "FighterCharacter.h"

//////////////////////////////////////////////////////////////////////////
// AFighterCharacter

AFighterCharacter::AFighterCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	//The Bone that Ragdoll Physics will occurr at
	BoneName = "root";

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 150.0f; // The camera follows at this distance behind the character
	CameraBoom->SocketOffset = FVector(27.993212f, 57.137878f, 10.84642f);
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

//Events that occur when Game Starts
void AFighterCharacter::BeginPlay()
{
	Super::BeginPlay();
}

//Events that occur each Frame
void AFighterCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	//If CurrHealth Reaches 0, Simulate RagDoll Physics
	/*if (CurrHealth <= 0.f)
	{
		Ragdoll(0);
	}

	//Have Capsule Component and Camera Follow Mesh during RagDoll Physics Simulation
	if (ragdoll)
	{
		UpdateCapsuleLocation();
	}*/
}

//////////////////////////////////////////////////////////////////////////
// Input

//Allow Player to enter Inputs
void AFighterCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFighterCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFighterCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &AFighterCharacter::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFighterCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AFighterCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFighterCharacter::LookUpAtRate);
}


//Allow Player to Turn Character when using Gamepad
void AFighterCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
	//GetMesh()->SetRelativeRotation(FRotator(0.f, FollowCamera->GetComponentRotation().Yaw, 0.f));
}

//Rotates Character about Yaw
void AFighterCharacter::Turn(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate);
}

//Allow Player to let Character LookUp using Gamepad
void AFighterCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AFighterCharacter::LookUp(float Rate)
{
	AddControllerPitchInput(Rate);
}

//Allow Player to Move Forward/Backward
void AFighterCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

//Allow Player to Move Right/Left
void AFighterCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

//////////////////////////////////////////////////////////////////////////
// Damage Generator

//Generate a floating-Point number within a range that will be used for damage
float AFighterCharacter::DamageGenerator(float min, float max)
{
	return min + (rand() % static_cast<int>(max - min));
}

//////////////////////////////////////////////////////////////////////////
// RagDoll Simulation

//Update Location of Character if Action is needed
void AFighterCharacter::UpdateCapsuleLocation()
{
	FVector Target = GetMesh()->GetSocketLocation(BoneName) + FVector(0.f, 0.f, 35.f);
	GetCapsuleComponent()->SetWorldLocation(Target);
}

/////////////////////////////////////////////////////////////////////////
// Roll

//Start Character Rolling
void AFighterCharacter::Roll(int index)
{
	if (!GetCharacterMovement()->IsFalling())
	{
		if (isAttacking)
		{
			ComboReset();
		}

		if (!isRolling)
		{
			isRolling = true;
			DisableInput(UGameplayStatics::GetPlayerController(GetWorld(), index));
			PlayAnimMontage(R);
		}
	}
}

//Update Character's Location when Roll is occuring
void AFighterCharacter::UpdateLocation()
{
	LaunchCharacter(GetActorForwardVector() * 4000, true, false);
}

//Stop Character Rolling
void AFighterCharacter::StopRoll(int index)
{
	isRolling = false;
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), index));
}

/////////////////////////////////////////////////////////////////////////
// Leap

//Allow Character to Leap
void AFighterCharacter::Leap(int index)
{
	ComboReset();
	DisableInput(UGameplayStatics::GetPlayerController(GetWorld(), index));
}

//Allow Character to StopLeap
void AFighterCharacter::StopLeap(int index)
{
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), index));
}

/////////////////////////////////////////////////////////////////////////
// Combo System

//Will allow Melee Characters to attack using a Combo System
void AFighterCharacter::MeleeAttacks()
{
	if (isAttacking)
	{
		saveAttack = true;
	}
	else if (!isAttacking)
	{
		isAttacking = true;
		bUseControllerRotationYaw = true;
		MultiStringCombo();
	}
}

//Will allow Ranged Characters to attack using simple Combo System
void AFighterCharacter::RangedAttacks()
{
	if (isAttacking)
	{
		saveAttack = true;
	}
	else if (!isAttacking)
	{
		isAttacking = true;
		bUseControllerRotationYaw = true;
		TwoStringCombo();
	}
}

//Manage Combos for Melee Characters
void AFighterCharacter::MultiStringCombo()
{
	switch (AttackIndex)
	{
	case 0:
		AttackIndex = 1;
		PlayAnimMontage(A);
		break;
	case 1:
		AttackIndex = 2;
		PlayAnimMontage(B);
		break;
	case 2:
		AttackIndex = 3;
		PlayAnimMontage(C);
		break;
	case 3:
		AttackIndex = 0;
		PlayAnimMontage(D);
		break;
	}
}

//Save Combos for Melee Characters
void AFighterCharacter::SaveMultiAttack()
{
	if (saveAttack)
	{
		saveAttack = false;
		MultiStringCombo();
	}
}

//Manage Combos for Ranged Characters
void AFighterCharacter::TwoStringCombo()
{
	switch (AttackIndex)
	{
	case 0:
		AttackIndex = 1;
		PlayAnimMontage(A);
		break;
	case 1:
		AttackIndex = 0;
		PlayAnimMontage(B);
		break;
	}
}

//Save Combos for Ranged Characters
void AFighterCharacter::SaveTwoAttack()
{
	if (saveAttack)
	{
		saveAttack = false;
		TwoStringCombo();
	}
}

//Reset the Combo String
void AFighterCharacter::ComboReset()
{
	AttackIndex = 0;
	bUseControllerRotationYaw = false;
	saveAttack = false;
	isAttacking = false;
}

/////////////////////////////////////////////////////////////////////////
// Ability Indicators

//Enables the Use of using Controller Yaw when called 
void AFighterCharacter::StartAbility()
{
	ComboReset();
	bUseControllerRotationYaw = true;
}

//Disables the Use of using Controller Yaw when called 
void AFighterCharacter::StopAbility()
{
	bUseControllerRotationYaw = false;
}
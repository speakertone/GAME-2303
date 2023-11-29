// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "Week12_TrajectoryCharacter.h"
#include "Week12_TrajectoryProjectile.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsSettings.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
}


void UTP_WeaponComponent::ToggleProjectileSpeed()
{
	AWeek12_TrajectoryProjectile* projectile = ProjectileClass.GetDefaultObject();

	if (projectile->GetProjectileMovement()->InitialSpeed == projectileSpeed1)
		projectile->GetProjectileMovement()->InitialSpeed = projectileSpeed2;
	else
		projectile->GetProjectileMovement()->InitialSpeed = projectileSpeed1;

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, "Projectile speed: " + FString::SanitizeFloat(projectile->GetProjectileMovement()->InitialSpeed));
}

void UTP_WeaponComponent::DrawTrajectory(float lifeTime)
{
	if (Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			AWeek12_TrajectoryProjectile* projectile = ProjectileClass.GetDefaultObject();
			const float speed = projectile->GetProjectileMovement()->InitialSpeed;
			const float maxTime = projectile->InitialLifeSpan;
			projectile->GetProjectileMovement()->MaxSpeed = projectile->GetProjectileMovement()->InitialSpeed;

			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			const FRotator startRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			const FVector startLocation = GetOwner()->GetActorLocation() + startRotation.RotateVector(MuzzleOffset);
			const FVector forwardVector = PlayerController->GetCharacter()->GetActorForwardVector();
			
			float xVelocity = speed * FMath::Cos(FMath::DegreesToRadians(startRotation.Pitch));
			float zVelocity = speed * FMath::Sin(FMath::DegreesToRadians(startRotation.Pitch));

			FVector currentStartLocation = startLocation;
			trajectoryPrecision = FMath::Clamp(trajectoryPrecision, 1, 50);
			float inc = maxTime / trajectoryPrecision;
			for (float t = inc; t <= maxTime; t += inc)
			{
				float xDistance = xVelocity * t;
				float zDistance = zVelocity * t + (FMath::Square(t) * UPhysicsSettings::Get()->DefaultGravityZ) / 2;
				FVector endLocation = startLocation + FVector(forwardVector.X * xDistance, forwardVector.Y * xDistance, zDistance);
				FHitResult hit;

				DrawDebugLine(GetWorld(), currentStartLocation, endLocation, FColor::Green, false, lifeTime);

				// Stop drawing lines if the trajectory hits an object, ignoring projectiles
				if (GetWorld()->LineTraceSingleByChannel(hit, currentStartLocation, endLocation, ECC_Visibility))
				{
					//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, hit.GetActor()->GetName());
					AWeek12_TrajectoryProjectile* castedProjectile = Cast<AWeek12_TrajectoryProjectile>(hit.GetActor());
					if (!castedProjectile)
						break;
				}
				
				currentStartLocation = endLocation;
			}
		}
	}
}

void UTP_WeaponComponent::Fire()
{
	if (Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	// Try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);
	
			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	
			// Spawn the projectile at the muzzle
			World->SpawnActor<AWeek12_TrajectoryProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			// Match the trajectory's lifetime with the projectile's lifetime
			DrawTrajectory(3.0f);
		}
	}
	
	// Try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, Character->GetActorLocation());
	}
	
	// Try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Character->GetMesh1P()->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void UTP_WeaponComponent::AttachWeapon(AWeek12_TrajectoryCharacter* TargetCharacter)
{
	Character = TargetCharacter;

	// Check that the character is valid, and has no rifle yet
	if (Character == nullptr || Character->GetHasRifle())
	{
		return;
	}

	// Attach the weapon to the First Person Character
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	AttachToComponent(Character->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));
	
	// switch bHasRifle so the animation blueprint can switch to another animation set
	Character->SetHasRifle(true);

	// Set up action bindings
	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
			Subsystem->AddMappingContext(FireMappingContext, 1);
		}

		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::Fire);

			// Toggle
			EnhancedInputComponent->BindAction(ToggleAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::ToggleProjectileSpeed);
		}
	}
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Character == nullptr)
	{
		return;
	}

	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(FireMappingContext);
		}
	}
}
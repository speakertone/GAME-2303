// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "Week11_ReflectCharacter.h"
#include "Week11_ReflectProjectile.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
}

void UTP_WeaponComponent::DrawLine()
{
	FVector startLocation = GetOwner()->GetActorLocation();
	FVector endLocation = startLocation + GetOwner()->GetActorRightVector() * 2000;
	FHitResult hit;

	if (GetWorld()->LineTraceSingleByChannel(hit, startLocation, endLocation, ECC_Visibility))
	{
		DrawDebugLine(GetWorld(), startLocation, hit.ImpactPoint, FColor::Green);
		ReflectVector(startLocation, hit.ImpactPoint, hit.Normal, numberOfBounces);
		//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, normal.ToString());
	}
}

void UTP_WeaponComponent::ReflectVector(const FVector& startPoint, const FVector& hitPoint, const FVector& normal, int bounces, float lineDistance)
{
	FVector normalizedDirection = (hitPoint - startPoint).GetSafeNormal();
	FVector normalizedNormal = normal.GetSafeNormal();
	FVector reflectedDirection;

	reflectedDirection = normalizedDirection - 2 * normalizedDirection.Dot(normalizedNormal) * normalizedNormal;
	DrawDebugLine(GetWorld(), hitPoint, hitPoint + normalizedNormal * lineDistance, FColor::Red);

	FHitResult hit;
	bounces--;
	if (bounces > 0 && GetWorld()->LineTraceSingleByChannel(hit, hitPoint, hitPoint + reflectedDirection * lineDistance, ECC_Visibility))
	{
		DrawDebugLine(GetWorld(), hitPoint, hit.ImpactPoint, FColor::Blue);
		ReflectVector(hitPoint, hit.ImpactPoint, hit.Normal, bounces, lineDistance);
	}
	else
	{
		DrawDebugLine(GetWorld(), hitPoint, hitPoint + reflectedDirection * lineDistance, FColor::Blue);
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
			World->SpawnActor<AWeek11_ReflectProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
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

void UTP_WeaponComponent::AttachWeapon(AWeek11_ReflectCharacter* TargetCharacter)
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
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "PhysicsEngine/PhysicsSettings.h"


FVector UMyBlueprintFunctionLibrary::DrawTrajectory(FRotator startRotation, FVector startLocation, FVector forwardVector, float speed, float gravityScale, float projectileLifeTime, float trajectoryLifeTime, int precision)
{
	UWorld* world = GEngine->GameViewport->GetWorld();

	float xVelocity = speed * FMath::Cos(FMath::DegreesToRadians(startRotation.Pitch));
	float zVelocity = speed * FMath::Sin(FMath::DegreesToRadians(startRotation.Pitch));

	FVector currentStartLocation = startLocation;
	precision = FMath::Clamp(precision, 1, 50);
	float inc = projectileLifeTime / precision;
	for (float t = inc; t <= projectileLifeTime; t += inc)
	{
		float xDistance = xVelocity * t;
		float zDistance = zVelocity * t + (FMath::Square(t) * UPhysicsSettings::Get()->DefaultGravityZ * gravityScale) / 2;
		FVector endLocation = startLocation + FVector(forwardVector.X * xDistance, forwardVector.Y * xDistance, zDistance);
		FHitResult hit;

		DrawDebugLine(world, currentStartLocation, endLocation, FColor::Green, false, trajectoryLifeTime);

		// Stop drawing lines if the trajectory hits an object, ignoring projectiles
		if (world->LineTraceSingleByChannel(hit, currentStartLocation, endLocation, ECC_Visibility))
		{
			//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, hit.GetActor()->GetName());
			//UProjectileMovementComponent* castedProjectile = Cast<UProjectileMovementComponent>(hit.GetActor());
			if (!hit.GetActor()->ActorHasTag("Projectile"))
				return hit.Location;
		}

		currentStartLocation = endLocation;
	}
	return FVector(0, 0, 0);
}
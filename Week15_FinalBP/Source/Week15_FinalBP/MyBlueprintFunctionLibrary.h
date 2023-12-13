// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class WEEK15_FINALBP_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, category = "MyBlueprintFunctionLibrary")
	static FVector DrawTrajectory(FRotator startRotation, FVector startLocation, FVector forwardVector, float speed, float gravityScale, float projectileLifeTime, float trajectoryLifeTime = -1.f, int precision = 25);
	
};

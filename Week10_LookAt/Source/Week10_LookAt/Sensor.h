// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sensor.generated.h"

UCLASS()
class WEEK10_LOOKAT_API ASensor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UMaterial* MAT_On;

	UPROPERTY(EditAnywhere)
	UMaterial* MAT_Off;

	UPROPERTY(EditAnywhere)
	float sensorThreshold = 0.5f;	
	
public:	
	// Sets default values for this actor's properties
	ASensor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CheckSensor(float proximityToSensor);

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensor.h"

// Sets default values
ASensor::ASensor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

// Called when the game starts or when spawned
void ASensor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASensor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASensor::CheckSensor(float proximityToSensor)
{
	if (proximityToSensor >= sensorThreshold)
	{
		Mesh->SetMaterial(0, MAT_On);
	}
	else
	{
		Mesh->SetMaterial(0, MAT_Off);
	}
}


// Copyright Epic Games, Inc. All Rights Reserved.

#include "Week12_TrajectoryGameMode.h"
#include "Week12_TrajectoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeek12_TrajectoryGameMode::AWeek12_TrajectoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

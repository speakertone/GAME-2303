// Copyright Epic Games, Inc. All Rights Reserved.

#include "Week11_ReflectGameMode.h"
#include "Week11_ReflectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeek11_ReflectGameMode::AWeek11_ReflectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "Week10_LookAtGameMode.h"
#include "Week10_LookAtCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeek10_LookAtGameMode::AWeek10_LookAtGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}

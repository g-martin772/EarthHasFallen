// Copyright Epic Games, Inc. All Rights Reserved.

#include "EarthHasFallenGameMode.h"
#include "EarthHasFallenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEarthHasFallenGameMode::AEarthHasFallenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

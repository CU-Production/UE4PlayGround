// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4PlayGroundGameMode.h"
#include "UE4PlayGroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4PlayGroundGameMode::AUE4PlayGroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

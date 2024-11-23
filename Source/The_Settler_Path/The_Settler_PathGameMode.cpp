// Copyright Epic Games, Inc. All Rights Reserved.

#include "The_Settler_PathGameMode.h"
#include "The_Settler_PathCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThe_Settler_PathGameMode::AThe_Settler_PathGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

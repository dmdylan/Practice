// Copyright Epic Games, Inc. All Rights Reserved.

#include "PracticeGameMode.h"
#include "PracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APracticeGameMode::APracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

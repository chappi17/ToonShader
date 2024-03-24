// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestImplementGameMode.h"
#include "TestImplementCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestImplementGameMode::ATestImplementGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

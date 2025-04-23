// Copyright Epic Games, Inc. All Rights Reserved.

#include "PA9GameMode.h"
#include "PA9Character.h"
#include "UObject/ConstructorHelpers.h"

APA9GameMode::APA9GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "ct_planet_experimentGameMode.h"
#include "ct_planet_experimentHUD.h"
#include "ct_planet_experimentCharacter.h"
#include "UObject/ConstructorHelpers.h"

Act_planet_experimentGameMode::Act_planet_experimentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Act_planet_experimentHUD::StaticClass();
}

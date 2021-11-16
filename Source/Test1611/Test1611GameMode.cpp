// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test1611GameMode.h"
#include "Test1611HUD.h"
#include "Test1611Character.h"
#include "UObject/ConstructorHelpers.h"

ATest1611GameMode::ATest1611GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATest1611HUD::StaticClass();
}

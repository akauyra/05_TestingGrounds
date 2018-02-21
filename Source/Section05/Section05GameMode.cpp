// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Section05GameMode.h"
#include "Section05HUD.h"
#include "Section05Character.h"
#include "UObject/ConstructorHelpers.h"

ASection05GameMode::ASection05GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASection05HUD::StaticClass();
}

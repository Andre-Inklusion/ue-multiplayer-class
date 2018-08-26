// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "IADE_01GameMode.h"
#include "IADE_01HUD.h"
#include "IADE_01Character.h"
#include "UObject/ConstructorHelpers.h"

AIADE_01GameMode::AIADE_01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIADE_01HUD::StaticClass();
}

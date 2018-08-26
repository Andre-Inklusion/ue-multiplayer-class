// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "IADE_01HUD.generated.h"

UCLASS()
class AIADE_01HUD : public AHUD
{
	GENERATED_BODY()

public:
	AIADE_01HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


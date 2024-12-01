// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Resource_spot.h"
#include "Farm.generated.h"

/**
 * 
 */
UCLASS()
class THE_SETTLER_PATH_API AFarm : public AResource_spot, public IInteractible
{
	GENERATED_BODY()
	
	// H�rit� via IInteractible
	void Interact(AThe_Settler_PathCharacter* player) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactible.generated.h"

class AThe_Settler_PathCharacter;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractible : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class THE_SETTLER_PATH_API IInteractible
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Interact(AThe_Settler_PathCharacter* player) = 0;
};

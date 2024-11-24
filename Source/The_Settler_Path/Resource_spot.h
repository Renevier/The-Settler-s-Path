// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Resource_spot.generated.h"

class DA_Resouce;

UCLASS()
class THE_SETTLER_PATH_API AResource_spot : public AActor
{
	GENERATED_BODY()
	
	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	DA_Resouce* resource;*/

public:	
	// Sets default values for this actor's properties
	AResource_spot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BarghestAIController.generated.h"

/**
 * 
 */
UCLASS()
class MONSTERSLAYERVR_API ABarghestAIController : public AAIController
{
	GENERATED_BODY()
public:

	void Tick(float DeltaTime) override;
	
	
};
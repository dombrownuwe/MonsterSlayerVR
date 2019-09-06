// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "IMotionController.h"
#include "IModularFeatures.h"
#include "ConstructorHelpers.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "VRPlayerPawn.generated.h"



UCLASS()
class MONSTERSLAYERVR_API AVRPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRPlayerPawn();
	~AVRPlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MotionControllerRegistry();
	
		IMotionController* Controller = nullptr;
	
		UPROPERTY(VisibleAnywhere)
			UMotionControllerComponent* LeftControllerComponent = nullptr;

		UPROPERTY(VisibleAnywhere)
			UMotionControllerComponent* RightControllerComponent = nullptr;

		UPROPERTY(VisibleAnywhere)
			UStaticMeshComponent* LeftContMeshComp = nullptr;
	
		UPROPERTY(VisibleAnywhere)
			UCameraComponent* CameraComponent = nullptr;
};

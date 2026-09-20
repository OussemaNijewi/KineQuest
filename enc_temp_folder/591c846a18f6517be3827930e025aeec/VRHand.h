// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRHand.generated.h"
#include "MotionControllerComponent.h"

UCLASS()
class KINEQUEST_API AVRHand : public AActor
{
	GENERATED_BODY()
	
public:	
	AVRHand();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UMotionControllerComponent* MotionController;


private:	
	

};

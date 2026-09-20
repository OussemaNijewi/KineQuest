// Fill out your copyright notice in the Description page of Project Settings.


#include "Hands/VRHand.h"

AVRHand::AVRHand()
{
	PrimaryActorTick.bCanEverTick = true;
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>("MotionController");
	SetRootComponent(MotionController);

}

void AVRHand::BeginPlay()
{
	Super::BeginPlay();
	
}

void AVRHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


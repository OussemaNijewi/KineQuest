// Copyright Epic Games, Inc. All Rights Reserved.


#include "Hands/VRHand.h"
#include "MotionControllerComponent.h"
#include "Components/WidgetInteractionComponent.h"

AVRHand::AVRHand()
{
	PrimaryActorTick.bCanEverTick = true;
	
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>("MotionController");
	SetRootComponent(MotionController);

	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>("HandMesh");
	HandMesh->SetupAttachment(MotionController);

	WidgetInteractionComponent = CreateDefaultSubobject<UWidgetInteractionComponent>("WidgetInteractionComponent");
	WidgetInteractionComponent->SetupAttachment(HandMesh);
}

void AVRHand::BeginPlay()
{
	Super::BeginPlay();
	
}

void AVRHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


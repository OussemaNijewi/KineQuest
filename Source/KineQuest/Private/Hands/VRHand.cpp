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

void AVRHand::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	switch (HandType)
	{
	case EControllerHand::Left:
		MotionController->MotionSource = "Left";
		break;
	case EControllerHand::Right:
		MotionController->MotionSource = "Right";
		break;
	default:
		break;
	}
}

void AVRHand::BeginPlay()
{
	Super::BeginPlay();

	if (HandType != EControllerHand::Left && HandType != EControllerHand::Right)
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Red, FString::Printf(TEXT("class %s:  Wrong HandType"), *GetClass()->GetName()));
	}
	
}

void AVRHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


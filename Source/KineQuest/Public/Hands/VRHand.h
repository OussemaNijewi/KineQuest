// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRHand.generated.h"

class UMotionControllerComponent;
class USkeletalMeshComponent;
class UWidgetInteractionComponent;



UCLASS()
class KINEQUEST_API AVRHand : public AActor
{
	GENERATED_BODY()
	
public:	
	AVRHand();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	//used to track the physical hardware in physical world and match that in VR world
	UMotionControllerComponent* MotionController;
	//physical 3d representation of the hand and animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	USkeletalMeshComponent* HandMesh;
	//used to let players interact with 3D UI menus in the game world
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	UWidgetInteractionComponent* WidgetInteractionComponent;


public:	
	

};

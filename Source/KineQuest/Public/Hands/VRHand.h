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
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//Components

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	//used to track the physical hardware in physical world and match that in VR world
	TObjectPtr<UMotionControllerComponent> MotionController;
	//physical 3d representation of the hand and animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	TObjectPtr<USkeletalMeshComponent> HandMesh;
	//used to let players interact with 3D UI menus in the game world
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	TObjectPtr<UWidgetInteractionComponent> WidgetInteractionComponent;

	//Hand Data
	//Defines which hand it is
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components|Hands|HandData")
	EControllerHand HandType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components|Hands|HandData")
	bool MirrorAnimation;


private:	
	

};

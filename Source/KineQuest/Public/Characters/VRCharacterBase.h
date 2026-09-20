// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacterBase.generated.h"

class UCameraComponent;

UCLASS()
class KINEQUEST_API AVRCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AVRCharacterBase();

protected:
	virtual void BeginPlay() override;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USceneComponent> Origin;

};

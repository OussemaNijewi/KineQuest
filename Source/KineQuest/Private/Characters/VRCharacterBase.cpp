// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/VRCharacterBase.h"
#include "Camera/CameraComponent.h"

AVRCharacterBase::AVRCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Origin = CreateDefaultSubobject<USceneComponent>("Origin");
	Origin->SetupAttachment(GetMesh());


	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(Origin);

}

void AVRCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


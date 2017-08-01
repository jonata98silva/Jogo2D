// Fill out your copyright notice in the Description page of Project Settings.

#include "Persona.h"


APersona::APersona() {

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEX("CameraBoom"));
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SetupAttchment(RootComponent);

	Camera = CreatDefaultSubobject<UCameraComponent>(TEXT("Camera");
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->SetupAttachment(CameraBoom);
}





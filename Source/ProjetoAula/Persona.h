// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Persona.generated.h"

/**
 * 
 */
UCLASS()
class PROJETOAULA_API APersona : public APaperCharacter
{
	GENERATED_BODY()
	
public:

	APersona();

private:

	UPROPERTY(EditAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;
	

	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LogicElement.h"
#include "LogicElement_AND.generated.h"

/**
 * 
 */
UCLASS()
class MYSPACE_API ALogicElement_AND : public ALogicElement
{
	GENERATED_BODY()

	uint8 const GetOutputValue() override;

	void SetOutputState() override;


};

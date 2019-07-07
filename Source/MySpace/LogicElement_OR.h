// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LogicElement.h"
#include "LogicElement_OR.generated.h"

/**
 * 
 */
UCLASS()
class MYSPACE_API ALogicElement_OR : public ALogicElement
{
	GENERATED_BODY()



		void SetOutputState() override;
	
};

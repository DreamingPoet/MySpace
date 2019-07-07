// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SortMethold.h"
#include "SortBall.h"
#include "BubbleSort.generated.h"

/**
 * 
 */
UCLASS()
class MYSPACE_API ABubbleSort : public ASortMethold
{
	GENERATED_BODY()
	void Sort(TArray<ASortBall*> SortBallArr) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		float ElaspedSecond;





};

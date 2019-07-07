// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wire.generated.h"

UCLASS()
class MYSPACE_API AWire : public AActor
{
	GENERATED_BODY()

		UPROPERTY()
		uint8 Value : 1;
	
public:	
	// Sets default values for this actor's properties
	AWire();



	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void SetValue0();

	UFUNCTION()
		void SetValue1();

	UFUNCTION()
	uint8 const GetValue();

	UFUNCTION(BlueprintImplementableEvent)
	 void SetEmission(uint8 EmissionValue);
};

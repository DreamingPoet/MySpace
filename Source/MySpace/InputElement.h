// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wire.h"
#include "LogicElement.h"

#include "InputElement.generated.h"



UCLASS()
class MYSPACE_API AInputElement : public AActor
{
	GENERATED_BODY()


		UPROPERTY()
		uint8 value;
	
public:	
	// Sets default values for this actor's properties
	AInputElement();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wire)
		TArray<AWire*> Wires;



	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
		void SetValue0();

	UFUNCTION(BlueprintCallable)
		void SetValue1();

	UFUNCTION(BlueprintCallable)
		uint8 Toggle();

	UFUNCTION()
		void BroadCastInput();

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wire.h"

#include "NumberDiaplay.generated.h"

UCLASS()
class MYSPACE_API ANumberDiaplay : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANumberDiaplay();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wire)
		TArray<AWire *>  Wires;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
		TArray<uint8> OutValue;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void OutPut(TArray<uint8> &OutValues);


	UFUNCTION()
		uint8 const GetInput(AWire* Wire);


};

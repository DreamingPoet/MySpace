// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wire.h"
#include "LogicElement.generated.h"

UCLASS()
class MYSPACE_API ALogicElement : public AActor
{
	GENERATED_BODY()

		UPROPERTY()
		float ElapsedTime = 0;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wire)
		class AWire* WireA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wire)
		class AWire* WireB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wire)
		class AWire* OutWire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshAsset)
		class UStaticMeshComponent* MeshAsset;

	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root;



	//FDelegateHandle ComputeDelegateHandle;

public:
	// Sets default values for this actor's properties
	ALogicElement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		virtual uint8 const GetOutputValue();

	UFUNCTION(BlueprintCallable)
		virtual void  SetOutputState();


	UFUNCTION()
		uint8 const GetInputA();

	UFUNCTION()
		uint8 const GetInputB();


};

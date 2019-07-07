// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SortBall.generated.h"

UCLASS()
class MYSPACE_API ASortBall : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	ASortBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

	UPROPERTY()
	bool bComparing;

	UPROPERTY()
	FVector OringinPosition;

	UPROPERTY()
		FVector DefaultPosition;

public:
	
	UPROPERTY(EditAnywhere, Category = Sort)
		int Number;

	UPROPERTY(EditAnywhere, Category = Sort)
		int SortPosition;

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
	void Swap();


	UFUNCTION(BlueprintCallable)
		FVector GetOringinPosition();

	UFUNCTION(BlueprintCallable)
		void SetOringinPosition();


	UFUNCTION(BlueprintCallable)
		void SetDefaultPosition();

	UFUNCTION(BlueprintCallable)
		FVector GetDefaultPosition();


	UFUNCTION(BlueprintCallable)
		void SetComparing();

	UFUNCTION(BlueprintCallable)
		void StopComparing();

	UFUNCTION(BlueprintCallable)
		bool GetComparing();

	UFUNCTION(BlueprintCallable)
		FVector GetColorValue();


	UFUNCTION(BlueprintCallable)
		void SetNumber(int num);


	UFUNCTION(BlueprintCallable)
		int GetNumber();

	UFUNCTION(BlueprintCallable)
		void SetSortPosition(int PositionNum);

	UFUNCTION(BlueprintCallable)
		int GetSortPosition();



};

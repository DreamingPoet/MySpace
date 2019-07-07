// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SortBall.h"
#include "Interactable.h"
#include "CompareZone.h"
#include "BigerNumIndicator.h"
#include "SortMethold.generated.h"

UCLASS()
class MYSPACE_API ASortMethold : public AActor , public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASortMethold();

	UPROPERTY(EditAnywhere, Category = Sort)
	TArray<ASortBall*> SortBall;

	UPROPERTY(EditAnywhere, Category = Sort)
		ACompareZone* CompareZone;
	UPROPERTY(EditAnywhere, Category = Sort)
		ABigerNumIndicator* BigerNumIndicator;

	UPROPERTY()
		bool bStart;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		virtual void Sort(TArray<ASortBall*> SortBallArr);


	UFUNCTION(BlueprintCallable)
		TArray<ASortBall*> GetSortBall();

	UFUNCTION(BlueprintCallable)
		void Swap(int i, int j, TArray<ASortBall*> SortBallArr);

	UFUNCTION(BlueprintCallable)
		void MoveToCompareZone(int i, int j, TArray<ASortBall*> SortBallArr);

	UFUNCTION(BlueprintCallable)
		void MoveBack(int i, int j, TArray<ASortBall*> SortBallArr);

	UFUNCTION(BlueprintCallable)
		void StartSort();

	UFUNCTION(BlueprintCallable)
		void ReSet();


	UFUNCTION()
		void MySwap(int& a, int& b);//模板特化 整数位运算，逻辑运算

protected:

	UPROPERTY()
	TArray<int> a;

	UPROPERTY()
		int i;

	UPROPERTY()
		int j;

	UPROPERTY()
		int bCompare;

	
};

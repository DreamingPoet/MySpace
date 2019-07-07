// Fill out your copyright notice in the Description page of Project Settings.

#include "SortMethold.h"

// Sets default values
ASortMethold::ASortMethold()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bStart = false;
}

// Called when the game starts or when spawned
void ASortMethold::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < SortBall.Num(); ++i)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, FString::Printf(TEXT("MyValue is %d"), SortBallArr[i]->GetNumber()), false);
		a.Add(SortBall[i]->GetNumber());
		SortBall[i]->SetSortPosition(i);
	}
	BigerNumIndicator->SetActorLocation(SortBall[0]->GetActorLocation());

	
}

// Called every frame
void ASortMethold::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASortMethold::Sort(TArray<ASortBall*> SortBallArr)
{
}

TArray<ASortBall*> ASortMethold::GetSortBall()
{
	return SortBall;
}

void ASortMethold::Swap(int m, int n, TArray<ASortBall*> SortBallArr)
{
	int i = 0;
	int j = 0;
	for (int p = 0; p < SortBallArr.Num(); ++p)
	{
		if (SortBallArr[p]->GetSortPosition() == m) i = p;
		if (SortBallArr[p]->GetSortPosition() == n) j = p;
	}
	//GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Cyan, FString::Printf(TEXT("i= %d  j=%d"), i, j, false));

	SortBallArr[i]->SetActorLocation(SortBallArr[j]->GetOringinPosition());
	SortBallArr[j]->SetActorLocation(SortBallArr[i]->GetOringinPosition());

	SortBallArr[i]->SetOringinPosition();
	SortBallArr[j]->SetOringinPosition();

	int temp = SortBallArr[i]->GetSortPosition();
	SortBallArr[i]->SetSortPosition(SortBallArr[j]->GetSortPosition());
	SortBallArr[j]->SetSortPosition(temp);

	if (SortBallArr[i]->GetNumber()> SortBallArr[j]->GetNumber())
	{
		BigerNumIndicator->SetActorLocation(SortBallArr[i]->GetActorLocation());
	}
	else
	{
		BigerNumIndicator->SetActorLocation(SortBallArr[j]->GetActorLocation());
	}
	

}

void ASortMethold::MoveToCompareZone(int m, int n, TArray<ASortBall*> SortBallArr)
{
	int i = 0;
	int j = 0;
	for (int p = 0; p < SortBallArr.Num(); ++p)
	{
		if (SortBallArr[p]->GetSortPosition() == m) i = p;
		if (SortBallArr[p]->GetSortPosition() == n) j = p;
	}

	SortBallArr[i]->SetActorLocation(CompareZone->GetActorLocation()+ FVector(0,-20,0) );
	SortBallArr[j]->SetActorLocation(CompareZone->GetActorLocation() + FVector(0, 20, 0));

	if (SortBallArr[i]->GetNumber() > SortBallArr[j]->GetNumber())
	{
		BigerNumIndicator->SetActorLocation(SortBallArr[i]->GetActorLocation());
	}
	else
	{
		BigerNumIndicator->SetActorLocation(SortBallArr[j]->GetActorLocation());
	}

}

void ASortMethold::MoveBack(int m, int n, TArray<ASortBall*> SortBallArr)
{
	int i = 0;
	int j = 0;
	for (int p = 0; p < SortBallArr.Num(); ++p)
	{
		if (SortBallArr[p]->GetSortPosition() == m) i = p;
		if (SortBallArr[p]->GetSortPosition() == n) j = p;
	}

	SortBallArr[i]->SetActorLocation(SortBallArr[i]->GetOringinPosition());
	SortBallArr[j]->SetActorLocation(SortBallArr[j]->GetOringinPosition());

	if (SortBallArr[i]->GetNumber() > SortBallArr[j]->GetNumber())
	{
		BigerNumIndicator->SetActorLocation(SortBallArr[i]->GetActorLocation());
	}
	else
	{
		BigerNumIndicator->SetActorLocation(SortBallArr[j]->GetActorLocation());
	}

}

void ASortMethold::StartSort()
{
	bStart = true;
}

void ASortMethold::ReSet()
{

	for (int i = 0; i < SortBall.Num(); ++i)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, FString::Printf(TEXT("MyValue is %d"), SortBallArr[i]->GetNumber()), false);
		a[i]=SortBall[i]->GetNumber();

		SortBall[i]->SetActorLocation(SortBall[i]->GetDefaultPosition());
		SortBall[i]->SetOringinPosition();
		SortBall[i]->SetSortPosition(i);
	}

	BigerNumIndicator->SetActorLocation(SortBall[0]->GetActorLocation());
	i = 0;
	j = 0;
	bCompare = 1;
	bStart = false;
}


void ASortMethold::MySwap(int& a, int& b) //模板特化 整数位运算，逻辑运算
{
	if (a == b)
	{
		return;
	}
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}//前提是 a != b 




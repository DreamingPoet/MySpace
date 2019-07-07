// Fill out your copyright notice in the Description page of Project Settings.

#include "SortBall.h"

// Sets default values
ASortBall::ASortBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bComparing = false;
	Number = 1;

}

// Called when the game starts or when spawned
void ASortBall::BeginPlay()
{
	Super::BeginPlay();

	SetDefaultPosition();
	SetOringinPosition();
	
}

// Called every frame
void ASortBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



FVector ASortBall::GetOringinPosition()
{
	return OringinPosition;
}

void ASortBall::SetOringinPosition()
{
	OringinPosition = GetActorLocation();
}

void ASortBall::SetDefaultPosition()
{

	DefaultPosition = GetActorLocation();
}

FVector ASortBall::GetDefaultPosition()
{
	return DefaultPosition;
}

void ASortBall::SetComparing()
{
	bComparing = true;
}

void ASortBall::StopComparing()
{
	bComparing = false;
}

bool ASortBall::GetComparing()
{
	return bComparing;
}

FVector ASortBall::GetColorValue()
{
	float temp = (float)Number;
	if (Number<5)
	{
		return FVector(0,0, temp /5);
	}
	if( Number>=5 && Number < 10)
	{
		return FVector((temp-5) /5, (temp-5) /5, 1);
	}

		return FVector(0);
	
}

void ASortBall::SetNumber(int num)
{
	Number = num;
}

int ASortBall::GetNumber()
{
	return Number;
}

void ASortBall::SetSortPosition(int PositionNum)
{
	SortPosition = PositionNum;
}

int ASortBall::GetSortPosition()
{
	return SortPosition;
}


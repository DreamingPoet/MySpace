// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberDiaplay.h"

// Sets default values
ANumberDiaplay::ANumberDiaplay()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANumberDiaplay::BeginPlay()
{
	Super::BeginPlay();
	//OutPut(OutValue);
}

// Called every frame
void ANumberDiaplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANumberDiaplay::OutPut(TArray<uint8> &OutValues)
{
	
	for (auto it = Wires.CreateIterator(); it; ++it)
	{
		if (*it  != nullptr)
		{
			OutValues.Emplace(GetInput(*it));
		}
		else
		{
			OutValues.Emplace(0);
		}
			
	
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("123"));
	
		
	}




}

uint8 const ANumberDiaplay::GetInput(AWire* Wire)
{

	if (Wire != NULL)
	{
		return Wire->GetValue();
	}
	else
	{
		return 0;
	}
		

}
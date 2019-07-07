// Fill out your copyright notice in the Description page of Project Settings.


#include "Wire.h"

// Sets default values
AWire::AWire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

}

// Called when the game starts or when spawned
void AWire::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWire::SetValue0()
{
	
	Value = 0;
	SetEmission(Value);
}

void AWire::SetValue1()
{
	Value = 1;
	SetEmission(Value);
}

 uint8 const AWire::GetValue()
{
	 return Value;
}




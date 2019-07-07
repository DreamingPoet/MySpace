// Fill out your copyright notice in the Description page of Project Settings.


#include "LogicElement.h"
#include "InputElement.h"
#include "StartButton.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALogicElement::ALogicElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	MeshAsset = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshAsset"));
	MeshAsset->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ALogicElement::BeginPlay()
{
	Super::BeginPlay();

/*
TArray<AActor*> StartButtons;
UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStartButton::StaticClass(), StartButtons);
if (StartButtons.Num() != 0)
	{
		auto StartButton = Cast<AStartButton>(StartButtons[0]);
		ComputeDelegateHandle = StartButton->OnInputChange.AddUObject(this, &ALogicElement::SetOutputState);
	}*/

}

// Called every frame
void ALogicElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan,FString::Printf(TEXT("%f"), DeltaTime));


		SetOutputState();

	

}

uint8 const ALogicElement::GetOutputValue()
{
	return 0;
}


void ALogicElement::SetOutputState()
{

}



uint8 const ALogicElement::GetInputA()
{

	if (WireA != nullptr)
	{
		return WireA->GetValue();
	}

	return 0;
}

uint8 const ALogicElement::GetInputB()
{
	if (WireB != nullptr)
	{
		return WireB->GetValue();
	}

	return 0;
}


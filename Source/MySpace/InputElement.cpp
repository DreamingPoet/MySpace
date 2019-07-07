// Fill out your copyright notice in the Description page of Project Settings.


#include "InputElement.h"
#include "StartButton.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInputElement::AInputElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
}


// Called when the game starts or when spawned
void AInputElement::BeginPlay()
{
	Super::BeginPlay();

	//BroadCastInput();
	
}

// Called every frame
void AInputElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AInputElement::SetValue0()
{

	
	for (auto It = Wires.CreateConstIterator(); It; ++It)
	{
		if (*It != nullptr)
		{
			Cast<AWire>(*It)->SetValue0();
			value = 0;

			//BroadCastInput();

		}
	}

}

void AInputElement::SetValue1()
{
	for (auto It = Wires.CreateConstIterator(); It; ++It)
	{
		if (*It != nullptr)
		{
			Cast<AWire>(*It)->SetValue1();
			value = 1;

			//BroadCastInput();

	
		}
	}
}

uint8 AInputElement::Toggle()
{

	if (value == 1)
	{
		SetValue0();
		return 0;
	}else{
		SetValue1();
		return 1;
	}

}

void AInputElement::BroadCastInput()
{
	TArray<AActor*> StartButtons;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStartButton::StaticClass(), StartButtons);
	if (StartButtons.Num() != 0)
	{
		auto StartButton = Cast<AStartButton>(StartButtons[0]);
		StartButton->OnInputChange.Broadcast();
	}
}




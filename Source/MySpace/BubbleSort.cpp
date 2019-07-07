// Fill out your copyright notice in the Description page of Project Settings.

#include "BubbleSort.h"

// Called when the game starts or when spawned
void ABubbleSort::BeginPlay()
{
	Super::BeginPlay();




/*
	for (int i = 0; i < a.Num(); ++i)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, FString::Printf(TEXT("a[i]= %d"), a[i]), false);
	}*/

	ElaspedSecond = 0;
	i = 0;
	j = 0;
	bCompare = 1;
}

// Called every frame
void ABubbleSort::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	ElaspedSecond += DeltaTime;



	if (ElaspedSecond >=1)
	{
		if (bStart)
		{
		
		
		if (bCompare == 1)
		{
			if (j < a.Num() - 1 - i)
			{
				MoveToCompareZone(j + 1, j, SortBall);
			}
			
			//ElaspedSecond--;
			bCompare = 2;	
			//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("02compare %d"), bCompare,false));
			//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("%d %d %d %d %d %d %d  i=%d  j=%d"), a[0], a[1], a[2], a[3], a[4], a[5], a[6], i, j), false);
		}
		else if(bCompare == 3)
		{
			//ElaspedSecond--;
			if (i < a.Num())
			{
				if (j < a.Num() - 1 - i)
				{
					//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("a[j]= %d  a[j + 1]=%d   j=%d"), a[j], a[j + 1], j, false));
					if (a[j] > a[j + 1])
					{
						MySwap(a[j + 1], a[j]);
						Swap(j+1, j, SortBall);
						//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("swaped"), false));
					}
					else
					{
						MoveBack(j + 1, j, SortBall);
						//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("moveback"), false));
					}
				}
				else
				{
					j = 0;
					j--; //很关键的一步
					++i;
				}
				j++;
			}
			else if(i >= a.Num())
			{
				BigerNumIndicator->SetActorLocation(SortBall[0]->GetActorLocation());//待完善...
			}


		
		//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("%d %d %d %d %d %d %d  i=%d  j=%d"), a[0], a[1], a[2], a[3], a[4], a[5], a[6] ,i ,j), false);
	
			bCompare = 1;
		}
		else if (bCompare == 2)
		{
			//ElaspedSecond--;
			//GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Cyan, FString::Printf(TEXT("empty %d"), bCompare, false));
			bCompare = 3;
		}

		}
		ElaspedSecond--;

	}

}


void ABubbleSort::Sort(TArray<ASortBall*> SortBallArr)
{


}



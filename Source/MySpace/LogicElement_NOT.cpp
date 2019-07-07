// Fill out your copyright notice in the Description page of Project Settings.


#include "LogicElement_NOT.h"
#include "Wire.h"

void ALogicElement_NOT::SetOutputState()
{
	if (OutWire != nullptr)
	{

		if (GetInputA() == 1)
		{
			OutWire->SetValue0();
		}
		else
		{
			OutWire->SetValue1();
		}


	}

}



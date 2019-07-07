// Fill out your copyright notice in the Description page of Project Settings.


#include "LogicElement_OR.h"
#include "Wire.h"

void ALogicElement_OR::SetOutputState()
{
	if (OutWire != nullptr)
	{

		if (GetInputA()==1 || GetInputB() == 1)
		{
			OutWire->SetValue1();
		}
		else
		{
			OutWire->SetValue0();
		}


	}

}
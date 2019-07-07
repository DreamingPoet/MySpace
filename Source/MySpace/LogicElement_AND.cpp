// Fill out your copyright notice in the Description page of Project Settings.


#include "LogicElement_AND.h"
#include "Wire.h"

uint8 const ALogicElement_AND::GetOutputValue()
{
	if (GetInputA() == GetInputB() && GetInputA() ==1)
	{
		return 1;
	}

	return 0;
}

void ALogicElement_AND::SetOutputState()
{
	if (OutWire != nullptr)
	{

		if (GetInputA() == GetInputB() && GetInputA() == 1)
		{
			OutWire->SetValue1();
		}
		else
		{
			OutWire->SetValue0();
		}


	}

}

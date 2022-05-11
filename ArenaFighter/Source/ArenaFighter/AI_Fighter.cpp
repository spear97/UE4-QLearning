// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Fighter.h"

AAI_Fighter::AAI_Fighter() {/*Constructor*/ }

//Single Attack
void AAI_Fighter::Attack1()
{
	PlayAnimMontage(A);
}

//Two Attacks
void AAI_Fighter::Attack2()
{
	PlayAnimMontage(B);
}

//Three Attacks
void AAI_Fighter::Attack3()
{
	PlayAnimMontage(C);
}

//Four Attacks
void AAI_Fighter::Attack4()
{
	PlayAnimMontage(D);
}

//Retrieves the Maximum Value in Values for the Given State Index
float AAI_Fighter::GetMax(int stateIndex)
{
	//Initialize max and set to Negative INFINITY
	float max = -999;

	if (stateIndex == 0)
	{
		for (int i = 0; i < 8; i++)
		{
			if (Values[i] > max)
			{
				max = Values[i];
			}
		}
	}
	else if (stateIndex == 8)
	{
		for (int i = 8; i < 16; i++)
		{
			if (Values[i] > max)
			{
				max = Values[i];
			}
		}
	}

	//Return the determined maximum value
	return max;
}

int AAI_Fighter::GetNextAction(int stateIndex, int actionIndex)
{
	//Initialize max and set to Negative INFINITY
	float max = -999;
	int Next = -1;

	if (stateIndex == 0)
	{
		for (int i = 0; i < 8; i++)
		{
			if (Values[i] > max)
			{
				max = Values[i];
				Next = i;
			}
		}
	}
	else if (stateIndex == 8)
	{
		for (int i = 8; i < 16; i++)
		{
			if (Values[i] > max)
			{
				max = Values[i];
				Next = i;
			}
		}
	}

	return Next;
}

//Calculate the Value Correspond to the reward Generated
float AAI_Fighter::GetQValue(int stateIndex, float curr)
{
	float max = GetMax(stateIndex);
	return curr + alpha * (Reward + ((gamma * max) - curr));
}
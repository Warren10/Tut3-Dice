#include "Dice.h"

#include<iostream>
#include <ctime>

using namespace std;

Dice::Dice() : LastRoll(), TotalRolls(), TotalScore(0)
{
}


Dice::~Dice()
{
	// Default Destructor
}

void Dice::Roll()
{
	LastRoll = 0;
	TotalRolls++;

	LastRoll = (rand() % 6) + 1;
	
	TotalScore += LastRoll;
	
}

void Dice::Roll( int nLastRoll){
	srand(time(NULL));
	rand();
	LastRoll = nLastRoll  ;
	TotalScore = 0;
}


int Dice::avg(Dice d, int n){
	int average = 0;
	int TotalRolls = 0;
	while (TotalRolls != n)
	{
		average = average + (d.Roll() / TotalRolls);
		TotalRolls++;

	}
	return average;
}

int Dice::avg(int arr[10], int n){
	int TotalScore = 0;
	for (int i = 0; i < n; i++)
	{
		TotalScore = TotalScore + arr[i];
	}
	int average = TotalScore / n;
	return average;

}

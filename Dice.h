#pragma once

#include<iostream>

using namespace std;

class Dice
{
private :
	int LastRoll;
	int TotalRolls;
	int TotalScore;
	

public:
	Dice();
	~Dice();
	void Roll();
	void Roll(int nLastRoll);
	int avg(Dice d, int TotalRolls);
	int avg(int arr[10], int arrn);



};


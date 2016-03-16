#include "Dice.h"

#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	for (int i = 0;  < 10; i++)
	{
		arr[i] = i + 1;
	}


	Dice d(5, 4);

	int Diceavgerage, arrayavgerage;

	Diceavgerage = d.avg(d, 5);
	cout << "The average of the dice rolls is" << Diceavgerage << endl;

	arrayavgerage = d.avg(arr, 4);
	cout << "The average of the array is" << arrayavgerage << endl;

	return 0;
	
}



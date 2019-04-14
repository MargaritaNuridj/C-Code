#include <cstdlib>
#include <iostream>
#include "sortSupport.h"
#ifndef SORTSUPPORT_CPP
#define SORTSUPPORT_CPP

using namespace std;

// Does seed first
// creates data for the array
template<class ItemType>
void makeArray(ItemType ary[], int max, int seed)
{
	srand(seed);
	for (int index = 0; index < max; index++)
		ary[index] = rand() % MAX_VALUE;
}

// prints the first 10 and last 10 items of an array
template<class ItemType>
void printEnds(ItemType ary[], int max)
{
	cout << "First 10: ";
	for (int index = 0; index < 10; index++)
		cout << ary[index] << " ";
	cout << endl << "Last 10: ";
	for (int index = max - 10; index < max; index++)
		cout << ary[index] << " ";
	cout << endl;
}
#endif
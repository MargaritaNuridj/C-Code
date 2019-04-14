#include "sortSupport.h"
#include "bubbleSort.h"
#include "radix.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int count = 0;
    int ary[MAX_SIZE];
	int seed = time(NULL);
	makeArray<int>(ary, MAX_SIZE, seed);
	//cout << "Bubble sort unsorted\n";
	//printEnds<int>(ary, MAX_SIZE);
	count  = bubbleSort<int>(ary, MAX_SIZE);
    cout<< "Bubble Sort had " <<count<<" swaps "<<endl;
	cout << "Bubble sort sorted\n";
    printEnds<int>(ary, MAX_SIZE);
    cout<<"";
    cout<<"MergeSort Sorted "<<endl;
    makeArray<int>(ary, MAX_SIZE, seed);
    count = mergeSort<int>(ary, 0, MAX_SIZE - 1);
    cout<<"MergeSort has "<<count<< " moves "<<endl;
    printEnds(ary, MAX_SIZE);
    cout<<"radixSort sorted "<<endl;
    makeArray<int>(ary, MAX_SIZE, seed);
    count = radixSort<int>(ary, MAX_SIZE, 4);
     cout<<"RadixSort has "<<count<<" moves "<<endl;
    printEnds(ary, MAX_SIZE);
    
    
	//system("pause");
	return 0;
}

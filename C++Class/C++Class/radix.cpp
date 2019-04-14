#ifndef RADIX_CPP
#define RADIX_CPP
#include "sortSupport.h"
#include <cmath>
#include "Node.h"
//#include "radix.h"

template <class ItemType>
int radixSort(ItemType theArray[], int n, int d)
{// Sorts n d-digit integers in the array theArray
	Node<ItemType>* bucket[10];
	Node<ItemType>* bucketEnd[10];
    
	int counter=0;

	for (int j = d; j >= 1; j--)
	{
		for (int bIndex = 0; bIndex < 10; bIndex++)
		{
			bucket[bIndex] = nullptr;
			bucketEnd[bIndex] = nullptr;
		}
        //counter = 0;
		//	Initialize a counter for each group to 0
		for (int i = 0; i < n; i++)
		{
			int dDigit = d - j;
			int mDigit = dDigit + 1;
			int k = (theArray[i] % (int)pow(10, mDigit)) / (int)pow(10, dDigit);

			Node<ItemType>* newNode = new Node<ItemType>(theArray[i]);
			// Place theArray[i] at the end of group k
			if (bucket[k] == nullptr)
			{
				bucket[k] = newNode;
				bucketEnd[k] = newNode;
			}
			else
			{
				bucketEnd[k]->setNext(newNode);
				bucketEnd[k] = newNode;
			}
            counter++;
			//	Increase kth counter by 1
		} // end for i

		/*Replace the items in theArray with all the items in group 0, followed
			by all the items in group 1, and so on*/
		counter = 0;
		for (int bIndex = 0; bIndex < 10; bIndex++)
		{
			Node<ItemType>* cur = bucket[bIndex];
			while (cur != nullptr)
			{
				theArray[counter] = cur->getItem();
				counter++;
				Node<ItemType>* deletePtr = cur;
				cur = cur->getNext();
				delete deletePtr;
			}
		}
        counter = 8*counter;
        //8xmaxscore
	} // end for j
    
    return counter;
}
#endif

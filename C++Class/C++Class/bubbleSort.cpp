#include "bubbleSort.h"
#ifndef BUBBLESORT_CPP
#define BUBBLESORT_CPP
#include <iostream>



using namespace std;
const int MAX_SIZE = 10000;
/** Sorts the items in an array into ascending order.
@pre None.
@post theArray is sorted into ascending order; n is unchanged.
@param theArray The given array.
@param n The size of theArray. */


//const int MAX_SIZE = 100000;
/* Merges two sorted array segments theArray[first..mid] and
 theArray[mid+1..last] into one sorted array.
 @pre  first <= mid <= last. The subarrays theArray[first..mid] and
 theArray[mid+1..last] are each sorted in increasing order.
 @post  theArray[first..last] is sorted.
 @param theArray  The given array.
// @param first  The index of the beginning of the first segment in
 theArray.
// @param mid  The index of the end of the first segment in theArray;
 mid + 1 marks the beginning of the second segment.
 //@param last  The index of the last element in the second segment in
 theArray.
 @note  This function merges the two subarrays into a temporary
 array and copies the result into the original array theArray. **/
template<class ItemType>
int bubbleSort(ItemType theArray[], int n)
{
	bool sorted = false;		// False when swaps occur
    int count = 0;
	int pass = 1;
	while (!sorted && (pass < n))
	{
		// At this point, theArray[n+1-pass..n-1] is sorted
		// and all of its entries are > the entries in theArray[0..n-pass]
		sorted = true;		// Assume sorted
		for (int index = 0; index < n - pass; index++)
		{
			// At this point, all entries in theArray[0..index-1]
			// are <= theArray[index]
			int nextIndex = index + 1;
			if (theArray[index] > theArray[nextIndex])
			{
				// Exchange entries
				std::swap(theArray[index], theArray[nextIndex]);
				sorted = false;	// Signal exchange
                count++;
			}			// end if
		}			// end for
		// Assertion: theArray[0..n-pass-1] < theArray[n-pass]
		pass++;
	}				// end while
    return count;
}
// end bubbleSort

template <class ItemType>
void merge(ItemType theArray[], int first, int mid, int last)
{
    
    ItemType tempArray[MAX_SIZE]; // Temporary array
    // Initialize the local indices to indicate the subarrays
    int first1 = first;           // Beginning of first subarray
    int last1 = mid;              // End of first subarray
    int first2 = mid + 1;         // Beginning of second subarray
    int last2 = last;             // End of second subarray
    
    // While both subarrays are not empty, copy the
    // smaller item into the temporary array
    int index = first1;           // Next available location in tempArray
    while ((first1 <= last1) && (first2 <= last2))
    {
        // At this point, tempArray[first..index–1] is in order
        if (theArray[first1] <= theArray[first2])
        {
            tempArray[index] = theArray[first1];
            first1++;
        }
        else
        {
            tempArray[index] = theArray[first2];
            first2++;
        }  // end if
        
        index++;
    }  // end while
    
    // Finish off the first subarray, if necessary
    while (first1 <= last1)
    {
        // At this point, tempArray[first..index–1] is in order
        tempArray[index] = theArray[first1];
        first1++;
        index++;
    }  // end while
    
    // Finish off the second subarray, if necessary
    while (first2 <= last2)
    {
        // At this point, tempArray[first..index–1] is in order
        tempArray[index] = theArray[first2];
        first2++;
        index++;
    }  // end for
    
    // Copy the result back into the original array
    for (index = first; index <= last; index++)
        theArray[index] = tempArray[index];
}  // end merge

/** Sorts the items in an array into ascending order.
 @pre  theArray[first..last] is an array.
 @post  theArray[first..last] is sorted in ascending order.
 @param theArray  The given array.
 @param first  The index of the first element to consider in theArray.
 @param last  The index of the last element to consider in theArray. */
template<class ItemType>
int mergeSort(ItemType theArray[], int first, int last)
{
    int count = 0;
    //first- last;
    if (first < last)
    {
        // Sort each half
        int mid = (first + last)/ 2; // Index of midpoint
        
        // Sort left half theArray[first..mid]
        count+= mergeSort(theArray, first, mid);
        
        // Sort right half theArray[mid+1..last]
        count+= mergeSort(theArray, mid + 1, last);
        
        // Merge the two halves
        merge(theArray, first, mid, last);
        count+=(last-first+1);
    }  // end if
    return count;
}  // end mergeSort

#endif

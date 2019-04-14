#pragma once

template<class ItemType>
int bubbleSort(ItemType theArray[], int n);

template<class ItemType>
void merge(ItemType theArray[], int first, int mid, int last);

template<class ItemType>
int mergeSort(ItemType theArray[], int first, int last);

#include "bubbleSort.cpp"

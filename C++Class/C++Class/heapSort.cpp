//
//  heapSort.cpp
//  C++Class
//
//  Created by Margarita Nuridjanian on 12/11/17.
//  Copyright © 2017 Margarita Nuridjanian. All rights reserved.
//

#include "heapSort.hpp"
#include <iostream>

using namespace std;

template<class ItemType>
int heapSort(int ary[], int size)
{
    heapCreate(ary, size)
    {
        do
        {
            swap(ary[0], [size-1])
            size--;
            heapRebuild(0, ary, size)
            
        }while(size>1)
            
    }
    return ary;
}

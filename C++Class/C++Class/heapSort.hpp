//
//  heapSort.hpp
//  C++Class
//
//  Created by Margarita Nuridjanian on 12/11/17.
//  Copyright © 2017 Margarita Nuridjanian. All rights reserved.
//

#ifndef heapSort_hpp
#define heapSort_hpp

#include <stdio.h>

int heapSort(int ary[], int size);

template<class ItemType>
int heapCreate(ItemType ary[], int max, int seed);

#include "heapSort.cpp"
#endif /* heapSort_hpp */

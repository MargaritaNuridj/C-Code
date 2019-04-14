/*
 void towers(int n, char a , char b, char c)
if n >0
towers (n-1, a, c<b)
display "move from" a " to" b
 tower(n-1, c, b, a)
*/


//  main.cpp
//  BinarySearch
//
//  Created by Margarita Nuridjanian on 9/5/17.
//  Copyright © 2017 Margarita Nuridjanian. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int binarySearch(int ary[], int first, int last, int target)
{
    int mid = -1;
    cout<< first <<" "<<endl;
    if(first <=last){
        mid = (first + last)/2;
        if(ary[mid] > target)
        {
            if(ary[mid] > target)
            {
                return binarySearch(ary, first, mid-1, target);
                
            }
            
            else
                return binarySearch(ary, mid +1, last, target);
        }
    }

    return mid;
}

int main()
{
    
    int a[] = {2, 5, 7, 9, 12, 13, 55, 66, 77, 88};
    int length = sizeof(a);
    int num;
    do{
        cout<<"Enter value to search(to quit)";
        cin>>num;
        if(num >0)
            cout<< "Found at" <<binarySearch(a, 0, length- 1,num);
    }while(num> 0);
    
   return(0);
}

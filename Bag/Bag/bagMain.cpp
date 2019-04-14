//
//  main.cpp
//  Bag
//
//  Created by Margarita Nuridjanian on 9/7/17.
//  Copyright © 2017 Margarita Nuridjanian. All rights reserved.
//

/*#include <iostream> // For cout and cin
#include <string> // For string objects
#include "Bag.h" // For ADT bag
using namespace std;
int main()
{
    string clubs[] = { "Joker", "Ace", "Two", "Three",
        "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack",
        "Queen", "King" };
    // Create our bag to hold cards
    Bag<string> grabBag;
    Bag<string> dumpBag;
    
    grabBag.add(clubs[1]);
    grabBag.add(clubs[2]);
    grabBag.add(clubs[4]);
    grabBag.add(clubs[8]);
    grabBag.add(clubs[10]);
    grabBag.add(clubs[12]);
    
    dumpBag.add(clubs[3]);
    dumpBag.add(clubs[5]);
    dumpBag.add(clubs[7]);
    dumpBag.add(clubs[9]);
    dumpBag.add(clubs[10]);
    dumpBag.add(clubs[12]);
    
    Bag<string> Itersection(Bag<string> bagToCompare){
        
        
        return grabBag;
    }
    
    
    return 0;
}; // end main\*/
#include <iostream>
#include <vector>

#include "LinkedBag.h"

using namespace std;

int main(){
    LinkedBag obj;
    
    cout << "Is list empty? " << obj.isEmpty() << endl;
    
    for(int i = 0; i < 1000; i++){
        obj.add(999-i);
    }
    
    cout << "Is list empty? " << obj.isEmpty() << endl;
    cout << "Original Size of the list is " << obj.getCurrentSize() << endl;
    
    obj.insert(1000, 900);
    cout << "Current Size of the list after inserting 1000 at 900 should be 1001, your output is " << obj.getCurrentSize() << endl;
    cout << "Value at position 900 should be 1000, your output is " << obj.getAt(900) << endl;
    cout << "Value at position 901 should be 900, your output is " << obj.getAt(901) << endl;
    
    obj.remove(50);
    cout << "Does list contain number 50? " << obj.contains(50) << endl;
    
    cout << "Frequency of value 40? " << obj.getFrequencyOf(40) << endl;
    
    cout << "Value at position 49 should be 0, your output is " << obj.getAt(49) << endl; // remove function replaces value at 50 with first value and deletes the first entry
    
    cout << "Value at position 60 should be 61, your output is " << obj.getAt(60) << endl;
    
    obj.setAt(50, 50);
    
    cout << "Does list contain number 50? " << obj.contains(50) << endl;
    cout << "Value at position 50 should be 50, your output is " << obj.getAt(50) << endl;
    
    obj.clear();
    
    cout << "List cleared" << endl;
    
    for(int i = 0; i < 1000; i++){
        obj.push_back(999-i);
    }
    
    cout << "Value at position 0 should be 999, your output is " << obj.getAt(0) << endl;
    
    LinkedBag ret_obj = obj.reverse();
    
    cout << "Value at position 0 of reverse list should be 0, your output is " << ret_obj.getAt(0) << endl;
    
    obj.pop_front();
    obj.pop_back();
    cout << "Current Size of the list should be 998, your output is " <<
    obj.getCurrentSize() << endl;
    cout << "Does list contain number 0? " << obj.contains(0) << endl;
    cout << "Does list contain number 999? " << obj.contains(999) << endl;
    
    
    return 0;
}

//
//  Node.h
//  Bag
//
//  Created by Margarita Nuridjanian on 9/7/17.
//  Copyright © 2017 Margarita Nuridjanian. All rights reserved.
//

#ifndef Node_h
#define Node_h

class Node
{
private:
    int        data; // A data item
    Node*      next; // Pointer to next node
    
public:
    Node();  // Default Constructor
    Node(const int& aData);  // Overloaded constructor
    Node(const int& aData, Node* nextNodePtr); // Overloaded constructor
    void setItem(const int& aData);  // Set data
    void setNext(Node* nextNodePtr); // Set next node pointer
    int getItem() const ;    // get data
    Node* getNext() const ;  // get next node pointer
}; // end Node

#endif

//#endif /* Node_h */

#include <iostream>
#include <string>
#include "ArrayStack.h"

using namespace std;

int main()
{
   StackInterface<string>* stackPtr = new ArrayStack<string>();
   string anItem = "";
   cout << "Enter a string: ";
   cin >> anItem;                    // Read an item
   stackPtr->push(anItem);    // Push item onto stack
   anItem = "Howdy";
   stackPtr->push(anItem);

   while (!stackPtr->isEmpty())
   {
	   cout << stackPtr->peek() << endl;
	   stackPtr->pop();
   }
   system("pause");
   return 0;
}
#include "binarySearch.h"

#include <iostream>

using namespace std;

int main()
{
	int ary[MAX_ARRAY] = {1, 5, 9, 12, 15, 21, 29, 31};

	char selection;
	int searchValue;
	do
	{
		cout << "Enter s to search or q to quit: ";
		cin >> selection;
		if (selection == 's')
		{
			cout << "Enter number to search for: ";
			cin >> searchValue;
			int found = binarySearch(ary, 0, MAX_ARRAY-1, searchValue);
			if (found < 0)
				cout << "Not found!\n";
			else
				cout << "Found at " << found << endl;
		}
	}while (selection != 'q');

	system("pause");
	return 0;
}
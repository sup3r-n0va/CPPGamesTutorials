#include <iostream>
#include <string>

using namespace std;

int main() {
	
	// loop variable
	int i;	
	//constant int for the array
	const int numitems = 5;
	// an array can hold multiple variables
	string shopitems[numitems] = {"Armor", "Boots", "Sword", "Helmet", "Gun"};

	//printing all the items
	for (i = 0; i < numitems; i++) {
		cout << shopitems[i] << endl;
	}
	return 0;	

}

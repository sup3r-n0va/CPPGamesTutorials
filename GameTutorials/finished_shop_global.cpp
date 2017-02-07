#include <iostream>
#include <string>


using namespace std;

//Global variable numitems
const int numitems = 6;
//global variable for the array
const string shopitems[numitems] = {"Armors", "Boots", "Swords", "Helmets", "Guns", "Bowarrow"};

void printshop(int i);
void printplayerinventory(int playerinventory[numitems]);
bool buyitems(int playerinventory[numitems]);

int main() {

	bool isdone = false;
	// loop variable
	int i;
	// number of inventory of each shop item
	int playerinventory[numitems] = {0, 0, 0, 1, 0, 0};

	cout << "*** Welcome to the item shop ***!\n";
	
	while (isdone == false) {

		//printing all the items
		printshop(i);

		printplayerinventory(playerinventory);

		isdone = buyitems(playerinventory);
		
		
		cout << "\n\n\n";
	}
	return 0;

}

// prints the number of available inventory in shop items
void printplayerinventory(int playerinventory[numitems]) {

	cout << "Your Inventory is: \n";

	for (int i = 0; i < numitems; i++) {
		if (playerinventory[i] > 0) {
			cout << playerinventory[i] << " x " << shopitems[i] << endl; 
		}
	}
	cout << endl;
}
 

void printshop(int i) {

	cout << "Shop Inventories\n";
	  //printing all the items
        for (i = 0; i < numitems; i++) {
                cout << i + 1 <<" . " << shopitems[i] << endl;
        }

	cout << "************\n\n";

}

bool buyitems(int playerinventory[numitems]) {

	int input;
	cout << "What would you like to buy? Enter - 1 to quit. Enter (" << 1 <<  "-" << numitems << "):";
	cin  >> input;


	// to quit program
	if (input == -1) {
		return true;
	}
	if ((input < 0) || (input > numitems)) {
		cout << "That was STUPID!!\n";
		
	}
	// makes more items available in the inventory
	playerinventory[input - 1]++;
	
	return false;
}

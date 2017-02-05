#include <iostream>
#include <string>

using namespace std;

int main() {

	// There are three types of loops
	// for loop
	// while loop
	// do while loop
	int counter = 0;

	while (counter < 10) {
		counter++;
		cout << "HA" << counter << endl;
		
	}

	for (int counter = 0; counter < 10; counter++) {
		cout << "HA" << " " << counter << endl;
	}
	for (int counter = 0; counter < 10;) {
		counter++;
		cout << "HA" << " " << counter << endl;
	}

	int counter2 = 11;
	do {
	// do while loop guarntees that the statement will 
	// display once
		 cout << "HA" << " " << counter2 << endl;
	}
	while (counter2 < 10);

}

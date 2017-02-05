#include <iostream>	// library for input and output
#include <string>	// library for strings

using namespace std;

int main(){

	string PlayerName;
	int age;

	cout << "What is your name Knight: "  << endl;
	cin >> PlayerName; 		// input a value

	cout << "Hello Sir "  << " " << PlayerName << endl;	// display value
	cout << "What is your age" << "  " << PlayerName << endl;
	cin >> age;
	cout << "Oh You are" << " " << age << " " << "years old" <<  " " << "Thats good!" << endl;

	if (age >= 100) { 	// if statement evaluate boolean expressions
		cout << "Too old bre!" << endl;
		cout << "You can't play the game sorry" << endl;
	}
	else if (age <= 2 ) {
                cout << "Don't be stupid" << endl;
        }
	else if (age < 12) {
		cout << "Too young sorry!" << endl;
	}
	else {
		cout << "Welcome to the game!" << endl;
	}
}

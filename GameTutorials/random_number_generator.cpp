#include <stdlib.h>
#include <stdio.h>
#include <iostream>		// input and output stream library
#include <string>		//strings library
#include <random>		//random number generator library
#include <ctime> 		// time library
using namespace std;

int main() {
	
	// Now we define the random number generator data type
	mt19937 randomGenerator(time(0)); // this will generate a new number
					  // each time
	uniform_real_distribution<float> AttackRoll(0.0f, 1.0f);


		
	// now we need to define a range for the random generator
	// use data type uniform_int_distribution for this
	uniform_int_distribution<int> diceroll(1, 6); //range for generator
	
	cout << "You have chosen ="  << " " << diceroll(randomGenerator) << endl;
	cout << "Snake attack standby "<< endl;

	float attack = AttackRoll(randomGenerator);
	
	if (attack <= 0.5f) {
		cout << "You've Scored " << " " << attack << endl;
		cout << "You have hit the snake" << endl;
	}
	else {
		cout << "You've scored " << " " << attack << endl;
		cout << "Sorry you missed your target" << endl;
	}

	return 0;

}

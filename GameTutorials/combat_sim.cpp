/* This is a Combat Simulator Game 
Programmed by sup3rn0va
*/
#include <iostream>
#include <ctime>
#include <string>
#include <random>

using namespace std;

int main() {

	int Humans;		  //define humans in combat
	int Monsters;		  // define monsters in combat
 	float Attack_points;	  // attack power
//	int counter;			  // loop counter value
//	const int HUMAN_ARRAY = Humans;   // indivdual humans
//	const int MONSTER_ARRAY = Monsters; // indivdual monsters
	// individual humans
	float  Human_attack;     
	// indivdual monsters
	float Monster_attack;
//	int total; 			// total humans or monsters left after the battle
	int Dead_Humans			// dead humans from the battle
	int Dead_Monsters		// dead monster from the battle
	int Remaining_Humans		// remaining humans after the battle
	int Remaining_Monsters		// remaining monster after the battle
	int total_Dead_Humans		// the total amount of dead humans after the battle
	int total_Dead_Monsters		// the total amount of dead monsters after the battle
  	cout << "*** Humans vs Monsters ***" << endl;
	cout <<  "Input the number of humans:" << " " << endl;
	cin  >> Humans;
	cout << "Input the number of monsters:" << " " << endl;
	cin  >> Monsters;
	
	cout << "Beginning combat!" << endl;
	cout << "<Combat noises>" << endl;
	
	// Now we define the random generator 
	mt19937 RandomGenerator(time(0)); //this will generate a new number 
					   // each time 
	// Now we are going to define range for the random generator
	// for human attack points  , i give chance of attacking hitting the
	// opponnent
	uniform_real_distribution<float> Attackpoints(0.0f, 1.0f);
	// game loop , loop will not finish until one side of the combatants
	// is finished 
	
 //	Human_attack = Attackpoints(RandomGenerator);
  //      Monster_attack = Attackpoints(RandomGenerator);	
//	counter = Humans + Monsters; 
	while (!(Humans == 0)  || (Monsters == 0)) {
		Human_attack = Attackpoints(RandomGenerator);
        	Monster_attack = Attackpoints(RandomGenerator); 
		// Now the fight begins between monster and human
		// if the indivdual human attack is greater than the Monster attack 
		// then minus one from the Monster
		if (Human_attack  > Monster_attack) {
				 Dead_Monsters = Monsters -  1;	
				 
				
		}
		// else if the human attack point is less than the monster attack point 
		// then minus one from humans
		else if (Human_attack < Monster_attack) { 
				Dead_Humans = Humans - 1;
				
		}
	}
	// remaining monsters after battle
	Remaining_Monsters = Dead_Monsters - Monsters;
	// Remaining humans after battle
	Remaining_Humans = Dead_Humans - Humans;
	// Total Dead Monsters after battle
	total_Dead_Monsters  = Monsters - Remaining_Monsters;
	// Total dead Humans after Battle
	total_Dead_Humans = Humans - Remaining_Humans;
	if(Humans > Monsters) { 
		cout << "Humans Win!" << endl;
		cout << "There are" << " " << Remaining_Humans  << " " << "left." << endl;
		cout << total_Dead_Humans << " " << "humans and" << "  "  << Monsters  << "Monsters lost their lives." << endl;
	}
	else  {
		cout << "Monsters Win!" << endl;
		cout << "There are" << " " << Remaining_Monsters  << " " << "left." << endl;
		cout << Humans << " " << "humans and" << "  "  << total_Dead_Monsters << "Monsters lost their lives." << endl;
	}
	return 0;
}		

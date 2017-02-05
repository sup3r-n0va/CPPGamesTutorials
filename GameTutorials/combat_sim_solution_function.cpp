#include <iostream>
#include <random>
#include <ctime>
using namespace std;


int getnumhumans();
int getnumskeletons();
void printresults(int numhumans, int numskeletons, int starthumans, int startskeletons);
void battleground(int &numhumans, int &numskeletons);
int main() {
	
	
	

	//variable that holds the random generator value
	//basically probability of attack hitting the
	//opponent
	

	// input values for combatants
	int numskeletons;		// number of skeletons in battle
	int numhumans; 		// number of humans in battle
				
	// game title
	cout << "*** Skeletons vs Humans ***\n";

	//get the number of humans 
	numhumans = getnumhumans();

	// get the number of humans alive at the end
	int starthumans = numhumans;
	//get the number of skeletons
	numskeletons = getnumskeletons();

	//get the number of skeletons alive at the end
	int startskeletons = numskeletons;
		
	// main battle between the humans and skeletons
	battleground(numhumans, numskeletons);
	
	//printing the final result after the battle
	printresults(numhumans, numskeletons, starthumans, startskeletons);

	
	return 0;
}

// function to input number of humans
int getnumhumans() {

	//get the number of humans 
	int numhumans;
        cout << "Input the number of humans:";
        cin  >> numhumans;
	
	return numhumans;
}

int getnumskeletons() {

	int numskeletons;
	cout << "Input the number of skeletons:";
	cin  >> numskeletons;

	return numskeletons;

}

//print the results to the screen
void printresults(int numhumans, int numskeletons, int starthumans, int startskeletons) {

                //if number of humans is greater than 0 
        if (numhumans > 0) {
                cout << "Humans Won!!\n";
                cout << "There are " << " " << numhumans << " " << "Humans left!\n";
        }
        // if number of skeletons is greater than  0
        else {
                cout << "Skeletons Won!!\n";
                cout << "There are " << " " << numskeletons << " " << "skeletons left!\n";
        }
        cout <<  starthumans - numhumans <<  "Humans and " << startskeletons - numskeletons << " " << "skeletons " << "loss their lives" << endl;


}


void battleground(int &numhumans, int &numskeletons) {

  	//human properties
        float humanattack = 0.6f;       // human attack chance
        float humanhealth = 250.0f;     // human health
        float humandamage = 200.0f;     // damage that the human can cause
        float currenthumanhealth = humanhealth; //currenthealth

        //skeleton properties
        float skeletonattack = 0.2f;    // skeleton attack chance
        float skeletonhealth = 50.0f;   // skeleton health
        float skeletondamage = 40.0f;   // damage the skeleton can do
        float currentskeletonhealth = skeletonhealth; //current health

	 char turn = 'H';                        //humans turn

	float attackresult;             // attackresult

	// Initialise a random generator
        static default_random_engine randomengine(time(NULL)); 
        uniform_real_distribution<float> attack(0.0f, 1.0f);


	while ((numhumans > 0) && (numskeletons > 0)) { 
                // get our attack result from a random generator
                attackresult = attack(randomengine);
                //human turn
                if (turn == 'H') {

                        //check if attack was succesful 
                        if (attackresult <= humanattack) {
                        // minus health from the skeleton because
                        // of human damage
                                currentskeletonhealth -= humandamage; 
                                // check to see if health is less than 0
                                if (currentskeletonhealth < 0) {
                                        // minus one as one has died
                                        numskeletons--;
                                        // a new skeleton joins in the fight
                                        currentskeletonhealth =  skeletonhealth;
                                }
                        }
                        // skeleton turn 
                        turn = 'S';             

                }
                else {// now the skeletons turn for the attacker
			// check to see if attack was successful
                        if (attackresult <= skeletonattack) {
                                currenthumanhealth -= skeletondamage;
                                //to check to see if human has died
                                if (currenthumanhealth  < 0) {
                                        //then minus one
                                        numhumans--;
                                        // A new human now joins in the fight
                                        currenthumanhealth = humanhealth;
                                }
                        }
                        // now its humans turn!
                        turn = 'H';
                }

        }

}



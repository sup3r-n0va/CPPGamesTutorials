#include <iostream>

using namespace std;

int main()
{
	// Variables are a way to store data
	// int holds integers meaning whole numbers
	// system is a integer variable
	int cats;
	
	// to store a value inside a variable you use a = sign 
	cats = 1000; // this variable now holds integer of 1000
	cats = cats + 2; // this will evaluate to cats + 2 which is 1002
	float dogs = 100.53f; // float is a decimal value
			    // always remeber to place a f after the floating
			    // point value
	float playerDamage = 300.50f; // players hit point 
	float  ZombieHealth = 550.60f; // Zombie current health
	
	float PlayerHealth = 100.80f; //player current health
	float HealthPack = 200.40f; // Health gained

	cout << "There are" << " " << cats << " " << "cats" << endl;
	cout << "There are also" << " " << dogs << " " << "dogs" << endl;
	cout << "Zombie Health =" << " " << ZombieHealth - playerDamage << endl;
	cout << "PlayerHealth = " << " "<< PlayerHealth + HealthPack << endl;

	return 0;
}

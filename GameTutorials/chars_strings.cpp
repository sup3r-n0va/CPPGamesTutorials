#include <iostream> // input and output library 
#include <string> // library for strings

using namespace std;

int main(){

	string mouse = "$"; // character $ is assigned to variable mouse
	string PlayerName = "Tom";		    // lets see if mouse will be printed 
			    // This will not work as strings are double quote
			    // whereas chars are single quotes
	string NewPlayerName = "Tim";	// A string is also a class
	PlayerName = NewPlayerName;
	string SinglePlayer = "Mortal"; 
	
	cout << mouse << endl;
	cout << "New Player name  = " << " " << PlayerName << endl;
	cout << "New Player name is :" << PlayerName.length() << " " << "Characters long" << endl;
	cout << "Single Player is: " << SinglePlayer.length() << " " << "Characters long\n";

}	


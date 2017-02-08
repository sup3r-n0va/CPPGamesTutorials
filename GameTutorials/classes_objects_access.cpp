#include <iostream>
#include <string>

using namespace std;

class Monster {
public :
	void growl() {
		cout  << "Growl!!!\n";
	}
	
	// this is also called a setter function
	void setname(string name) {
		_name = name;
	}

	//this is called a getter function
	string getname() {
		return _name;
	}

private:
	//underscore means private variable
	string _name;

};

int main() {

	Monster monster1;
	monster1.setname("Omar");
	monster1.growl();	

	cout << monster1.getname() << endl;
	
	return 0;
}

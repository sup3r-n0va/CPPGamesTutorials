#include <iostream>
#include <string>

#include "Monster.h"

using namespace std;

int main() {

	Monster monsters[100];
	
	Monster monster1("Tom");
	Monster monster2("Jill");

	monster1.printname();
	monster2.printname();

	monsters[0].printname();

	return 0;


}
sup3rn0va@debian:~/Documents/makegamescpp$ cat Monster.cpp
#include "Monster.h"
#include <iostream>


Monster::Monster() {

	_name = "NONAME";


}

Monster::Monster(string name) {

	_name = name;

}

void Monster::printname() {

	cout << "My name is" << " " << _name << endl;

}

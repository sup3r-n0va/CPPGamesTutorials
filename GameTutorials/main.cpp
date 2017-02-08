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

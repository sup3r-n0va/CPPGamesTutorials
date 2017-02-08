#ifndef MONSTER_H
#define MONSTER_H

#include <string>

using namespace std;

class Monster {

public:
	Monster();
	Monster(string name);

	void printname();

private:
	string _name;
};

#endif


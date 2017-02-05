#include <iostream>
#include <string>

using namespace std;

int main() {
	
	for (int i = 0; i < 100; i++) {
		if (!(i % 2 == 0))
			cout << i << endl;
	}
	for (int j = 1; j < 100; j += 2) {
		cout << j << endl;
	}
	for (int k = 1;	k < 1000; k *= 2) {
		cout << k << endl;
	}

	// booleans hold only two values these are true and false 
	bool IsGameOver = false;

	while (IsGameOver == false) {
		// do game things
		IsGameOver = true;
	}

	return 0;
}

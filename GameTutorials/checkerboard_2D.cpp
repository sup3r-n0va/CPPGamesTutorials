#include <iostream>

using namespace std;

class checkerboard {
public:
	int x;
	int y;
	void initboard() {
		

		// Looping through the checkerboard
		for (int y = 0; y < 8; y++) {
			for (int x = 0; x < 8; x++) {
				//even row 
				if ((x + y) % 2 == 0) {
					board[y][x] = 'A';
				}
				// odd row
				else {
					board[y][x] = '&';
				}
			}	
		}
	}
	// display the checkerboard				
	void printboard() {
		for (y = 0; y < 8; y++) {
			for (x = 0; x < 8; x++) {
				cout << board[y][x];
				cout << " ";
			}
			cout << "\n";
		}
	}
private:
	char board[8][8];
};

int main() {

	checkerboard checker_board;
	checker_board.initboard();
	checker_board.printboard();	


	return 0;
}

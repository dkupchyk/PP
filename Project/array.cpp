#include <iostream>
#include <fstream>
using namespace std;

const size_t sizeArr = 9;

/* 0 - empty;
   1 - wall;
   2 - starting and finishing points;
   3 - answer path
   9 - not our solution path (leads to dead end) */

int** convertFileArr(string name, int** grid) {
	ifstream file(name);

	int n = sizeArr + 1;
	char* buffer = new char[n + 1];
	buffer[n] = 0;
	for (int i = 0; i < n - 1; i++) {
		file.read(buffer, n);
		for (int j = 0; j < n - 1; j++) {
			grid[i][j] = buffer[j] - 48;
		}
	}

	return grid;

}

int** createArray(const int size) {
	int** grid = new int* [sizeArr];

	for (int i = 0; i < sizeArr; ++i){
		grid[i] = new int[sizeArr];
	}

	return grid;
}

void printSolution(int** initialGrid, int** solutionGrid) {

	for (int row = 0; row < sizeArr; row++) {
		for (int col = 0; col < sizeArr; col++) {
			if (initialGrid[row][col] == 1) {
				cout << "= ";
			}
			else {
				cout << "  ";
			}
		}
		if (row == sizeArr / 2) {
			cout << "           ---------->          ";

		}
		else {
			cout << "                                ";
		}
		for (int col = 0; col < sizeArr; col++) {
			if (solutionGrid[row][col] == 1) {
				cout << "= ";
			}
			else if (solutionGrid[row][col] == 3 || solutionGrid[row][col] == 2) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return;
}
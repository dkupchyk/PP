#include <iostream>
#include "header.h"
using namespace std;

int main() {

	cout << "                         ~ MAZE PATH FINDER ~ \n" << endl;
	cout << "This program finds a solution path in a grid that represents the maze" << endl;
	cout << " = - wall" << endl;
	cout << " * - solution path\n" << endl;

	const int numOfGrids = 5;
	string grids[numOfGrids] = { "GRID1.txt", "GRID2.txt", "GRID3.txt", "GRID4.txt", "GRID5.txt" };
	int** initialGrid = 0; 
	int** grid = 0; 

	for (int i = 0; i < numOfGrids; ++i) {
	
		cout << "\n                                " << grids[i].substr(0, 4) << " ";
		cout << grids[i].substr(4, 1) << "\n" << endl;

		initialGrid = createArray(sizeArr);
		grid = createArray(sizeArr);

		convertFileArr(grids[i], initialGrid);
		convertFileArr(grids[i], grid);

		solveMaze(grid);

		printSolution(initialGrid, grid);

		delete[] initialGrid;
		delete[] grid;

		initialGrid = 0;
		grid = 0;
		
	}

	return 0;
}

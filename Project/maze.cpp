
const size_t sizeArr = 9;

/* u = 1 v = 0
   u = -1 v = 0
   u = 0 v = 1
   u = 0 v = -1 */

const int direction[4][2] = { {-1, 0},
                              {1, 0},
							  {0, -1}, 
							  {0, 1} };

//Methd that checks whether there is another empy place near to go to next
bool validChoice(const int rowInd, const int colInd, int** grid) {
	if (grid[rowInd - 1][colInd] == 0 || grid[rowInd - 1][colInd] == 2 ||
		grid[rowInd + 1][colInd] == 0 || grid[rowInd + 1][colInd] == 2 ||
		grid[rowInd][colInd - 1] == 0 || grid[rowInd][colInd - 1] == 2 ||
		grid[rowInd][colInd + 1] == 0 || grid[rowInd][colInd + 1] == 2) {
		return true;	
	}
	return false;
}

bool solve(int rowInd, int colInd, int** curGrid) {

	//Checking whether it is an end
	if (curGrid[rowInd][colInd] == 2) {
		curGrid[rowInd][colInd] = 3;
		return true;
	}

	//If there is at least one branch or the end poin is connected to current point
	if (validChoice(rowInd, colInd, curGrid)) {
		curGrid[rowInd][colInd] = 3;
		for (int i = 0; i < 4; i++) {
			if (curGrid[rowInd + direction[i][0]][colInd + direction[i][1]] == 0
				|| curGrid[rowInd + direction[i][0]][colInd + direction[i][1]] == 2) {
				if (solve(rowInd + direction[i][0], colInd + direction[i][1], curGrid)) {
					return true;
				}
			}
		}
	}

	//If it is a dead end
	curGrid[rowInd][colInd] = 9;
	return false;
}

void solveMaze(int** curGrid) {
	int startRow = 0;
	int startCol = 0;
	bool foundStart = false;

	//Findind starting point
	for (int i = 0; i < sizeArr; i++) {
		for (int j = 0; j < sizeArr; j++) {
			if (curGrid[i][j] == 2) {
				startRow = i;
				startCol = j;
				foundStart = true;
				curGrid[i][j] = 3;
				break;
			}
		}
		if (foundStart) {break;}
	}

	//Moving to the next empty spot
	if (startRow == 0) {
		startRow++;
	}
	else{
		startCol++;
	}

	solve(startRow, startCol, curGrid);

	return;
}
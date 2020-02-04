#pragma once

const size_t sizeArr = 9;

void solveMaze(int** curGrid);

int** convertFileArr(std::string name, int** grid);
int** createArray(const int size);
void printSolution(int** initialGrid, int** solutionGrid);
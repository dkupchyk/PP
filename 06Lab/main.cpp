#include <iostream>
#include <time.h>
#include "sorting.h"
using namespace std;

int main() {
	cout.precision(3);
	srand(static_cast<unsigned int>(time(NULL)));
	const int n = 10;
	double array[n] = { 0 };
	double arrayNew[n] = { 0 };

	for (int i = 0; i < 4*n; i++) {cout << " ";}
	cout << "MERGE SORT" << endl;
	for (int i = 0; i < 9*n; i++) {cout << "_";}
	cout << "\n";
	/*This algorithm has been chosen as it is an efficient and stable, 
	comparison-based sorting algorithm. In addition, dividing has been done not
	into pairs with any two elements, but into pairs with two already sorted 
	sequences of elements, which makes sorting much more faster on the larger arrays.*/

	for (int k = 0; k < 5; k++) {
		//Filling the array with random numbers
		fillArray(array, n);
		copyArray(array, arrayNew, n);

		//Printing out the given array
		cout << "Given array: \t";
		printArray(array, n);

		//Sorting the given array using insert sort and then printing it out

		mergeSort(array, n);
		cout << "Sorted array: \t";
		printArray(array, n);

		for (int i = 0; i < 9*n; i++) {
			cout << "_";
		}
		cout << "\n";

	}

	return 0;
}
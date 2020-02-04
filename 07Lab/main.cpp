#include <iostream>
#include <time.h>
#include "structures.h"
#include "functions.h"
using namespace std;

int main() {

	//Creating an array and filling it with randdom numbers
	srand(static_cast<unsigned int>(time(NULL)));
	const int n = 10;
	int array[n] = { 0 };
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 30 ;
	}

	for (int i = 0; i < n; i++) {
		cout << "         n = " << array[i] << endl;
		cout << "Result = \t" << FibMatr(array[i]) << endl;
		cout << "Expected = \t" << FibRec(array[i]) << endl;
		cout << "______________________________"<< endl;
	}

	cout << "Result = \t" << FibMatr(0) << endl;
	cout << "Expected = \t" << FibRec(0) << endl;
	cout << "______________________________" << endl;

	return 0;
}
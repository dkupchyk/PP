#include <iostream>
#include <time.h>
#include "struct.h"
#include "functions.h"
using namespace std;

int main() {

	//Creating an array and filling it with randdom numbers
	srand(static_cast<unsigned int>(time(NULL)));
	cout.precision(2);
	const int sizeArr = 10;
	Vector2 vect = { 1, 0 };
	int k = 0;

	int n[sizeArr] = { 0 };
	int x[sizeArr] = { 0 };
	for (int i = 0; i < sizeArr; i++) {
		x[i] = rand() % 20 + 1;
		n[i] = rand() % 30 + 2;
	}

	for (int i = 0; i < sizeArr; i++) {
		vect = { 1, 0 };
		k = 0;
		cout << "x = " << x[i] << "\t n = " << n[i] << endl;

		cout << "x to power of n = \t" << power(x[i], n[i], k);
		cout << "\t steps = " << k << endl;
		k = 0;

		cout << "Fibonacci of n = \t" << Fibonaci(n[i], k);
		cout << "\t steps = " << k << endl;
		k = 0;

		cout << "Matrix Fibonacci of n = " << FibMatr(vect, n[i])._1 << endl;
		cout << "__________________________________________________" << endl;
	}

	return 0;
}
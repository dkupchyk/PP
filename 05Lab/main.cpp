#include <iostream>
#include <time.h>
#include "functions.h"
using namespace std;

int main() {
	cout.precision(3);
	double x[] = { 4, -1, 18.06, 12, 1, -32.34, 56.5};
	unsigned int n[] = { 2, 3, 4, 5, 6, 7, 8 };
	double* coeff = 0;
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < end(x) - begin(x); i++) {
		cout << "x = " << x[i] << ", n = " << n[i];

		//Counting an array of coefficients
		size_t size = n[i] + 1;
		coeff = new double[size];
		fillArray(coeff, size);
		cout << "\nArray of coefficients: [";
		for (unsigned int i = 0; i < size; i++) {
			cout << coeff[i];
			if (i != size - 1) {
				cout << ", ";
			}
		}

		//Counting polynom 
		cout << "]\nHorner = " << horner(coeff, size, x[i]) << endl;
		for (int i = 0; i < 90; i++){
			cout << "_";
		}
		cout << "\n";

		delete [] coeff;
		coeff = 0;
	}

	return 0;
}
#include <iostream>
#include <cmath>
#include "function.h"
using namespace std;

int main() {
	double eps = 0.000000001;
	double a[5] = {2.02, 5, 25.5, 48.0005, 22};
	double b[5] = { 7.8, 19.3, 27.8, 76, 30 };

	cout.precision(15);
	int size = end(a) - begin(a);
	for (int i = 0; i < size; i++) {
		cout << "If a = " << a[i] << "\t and b = " << b[i];
		cout << "\t then M(a,b) = " << average(a[i], b[i]) << endl;
	}

	return 0;
}
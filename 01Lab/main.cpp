#include <iostream>
using namespace std;
#include "tasks.h"

int main() {

	cout << "ARCSIN" << endl;
	double epsilon = 0.0000000000000001;
	double x_arcsin[3] = { 0.11, 0.123, -0.893};
	for (int i = 0; i < 3; i++) {
		cout << "If x = " << x_arcsin[i] << ", then arcsin(x) = " << arcsin(x_arcsin[i], epsilon) <<  "; Expected (cmath) = " << asin(x_arcsin[i]) << endl;
	}

	cout << "\nARCTG" << endl;
	double x_arctg[3] = { 100, 0.123, -0.5};
	for (int i = 0; i < 3; i++) {
		cout << "If x = " << x_arctg[i] << ", then arctg(x) = " << arctg(x_arctg[i], epsilon) << "; Expected = " << atan(x_arctg[i]) << endl;
	}

	cout << "\nEXPONENTIAL" << endl;
	double x_exp[3] = { -10, 12, 3 };
	for (int i = 0; i < 3; i++) {
		cout << "If x = " << x_exp[i] << ", then e(x) = " << exponential(x_exp[i], epsilon) << "; Expected = " << exp(x_exp[i]) << endl;
	}

	cout << "\nLN(X)" << endl;
	double x_ln[3] = { 0.74, 3, 49 };
	for (int i = 0; i < 3; i++) {
		cout << "If x = " << x_ln[i] << ", then ln(x) = " << ln(x_ln[i], epsilon) << "; Expected = " << log(x_ln[i]) << endl;
	}

	return 0;
}

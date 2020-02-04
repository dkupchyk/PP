#include <iostream>
#include "header.h"
using namespace std;

int main() {

	const double pi = 3.14159265358979323846;
	double curX = 0;
	double eps = 0.000000000000001;

	curX = dichotomy(sinX, -1, 1, eps);
	cout << "If the function is: sin(x) = x " << endl;
	cout << "Given interval is: [-1, 1] " << endl;
	cout << "Then x = " << curX << endl;
	cout << "__________________________________" << endl;

	curX = dichotomy(sin, pi - 1, pi - 0.5, eps);
	cout << "If the function is: sin(x) = 0 " << endl;
	cout << "Given interval is: [pi - 1, pi] " << endl;
	cout << "Then x = " << curX << endl;
	cout << "sin(x) = " << sin(curX) << endl;
	cout << "__________________________________" << endl;

	curX = dichotomy(ln1, 2, 3, eps);
	cout << "If the function is: ln(x) = 1 "<< endl;
	cout << "Given interval is: [2, 3] " << endl;
	cout << "Then x = " << curX << endl;
	cout << "ln(x) - 1 = " << ln1(curX) << endl;
	cout << "__________________________________" << endl;

	curX = dichotomy(exp2X, 0, 2, eps);
	cout << "If the function is: exp(x) = 2 - x " << endl;
	cout << "Given interval is: [0, 2] " << endl;
	cout << "Then x = " << curX << endl;
	cout << "exp(x) - 2 + x = " << exp2X(curX) << endl;
	cout << "__________________________________" << endl;

	return 0;
}

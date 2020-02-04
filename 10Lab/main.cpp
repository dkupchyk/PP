#include <iostream>
#include "headers.h"
using namespace std;

int main() {

	const double pi = 3.14159265358979323846;
	double answer = 0;
	double eps = 0.000000001;
	double inf = pow(10, 6);

	//Ellipse
	cout << "         Elliptic integral" << endl;
	cout << "a = 2.35, b = 3.09" << endl;
	answer = Simpson(0.00001, pi / 2, eps, ellipse);
	cout << "1/m(a, b)     = " << 1 / average(5.1, 9.9) << endl;
	cout << "2/pi * answer = " << (2 / pi) * answer << endl;
	cout << "__________________________________" << endl;

	//Dirichlet
	cout << "         Dirichlet integral" << endl;
	cout << "a = 5.1" << endl;
	answer = Simpson(0.00000001, inf, eps, Dirichlet);
	cout << "pi/2 * sgn(a) = " << (pi / 2) * sgn(5.1) << endl;
	cout << "integral      = " <<  answer << endl;
	cout << "__________________________________" << endl;

	//Pyasson
	cout << "         Pyasson integral" << endl;
	answer = Simpson(0, inf, eps, Poisson);
	cout << "sqrt(pi)/2    = " << sqrt(pi) / 2 << endl;
	cout << "integral      = " <<  answer << endl;
	cout << "__________________________________" << endl;

	//Euler
	cout << "         Euler integral" << endl;
	cout << "a = 0.835" << endl;
	answer = Simpson(0.0001, 10000, 0.01, Euler);
	cout << "pi/(sin a*pi) = " << pi / (sin(0.835 * pi)) << endl;
	cout << "integral      = " << answer << endl;
	cout << "__________________________________" << endl;

	return 0;
}

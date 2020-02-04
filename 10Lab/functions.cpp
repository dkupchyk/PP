#include <cmath>
#include <cassert>
#include <iostream>
using namespace std;

const double pi = 3.14159265358979323846;

double ellipse(const double x) {
	double a = 5.1, b = 9.9;
	return 1/(sqrt(a * a * sin(x) * sin(x) + b * b * cos(x) * cos(x)));
}

double Dirichlet(const double x) {
	double a = 5.1;
	if (x == 0) {
		return 0;
	}
	return sin(a * x)/x;
}

double Poisson(const double x) {
	return exp(- x * x);
}

double Euler( const double x) {
	double a = 0.835;
	assert( a > 0 && a < 1);
	return pow(x, a - 1) / (1 + x);
}

double average(const double a, const double b) {
	double aCur = a;
	double bCur = b;
	double an = sqrt(aCur * bCur);
	double bn = (aCur + bCur) / 2;
	while (aCur != an && bCur != bn && an < bn) {
		aCur = an;
		bCur = bn;
		an = sqrt(aCur * bCur);
		bn = (aCur + bCur) / 2;
	}
	return an;
}

double sgn(double x) {
	if (x > 0) return 1;
	else if (x == 0) return 0;
	else return -1;
}
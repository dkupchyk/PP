#include <cmath>

double average(double a, double b) {
	double aCur = a;
	double bCur = b;
	double an = sqrt(aCur * bCur);
	double bn = (aCur + bCur)/2;
	while ( aCur != an && bCur != bn && an < bn) {
		aCur = an;
		bCur = bn;
		an = sqrt(aCur * bCur);
		bn = (aCur + bCur) / 2;
	}
	return an;
}

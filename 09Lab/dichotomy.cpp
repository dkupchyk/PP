#include <cassert>
#include <iostream>
using namespace std;

double dichotomy(double (*f)(double), double a, double b, double eps) {
	//assert(f(a)* f(b) < 0);
	double l = a, r = b, m = 0;
	while ((r - l) > eps) {
		m = (l + r) / 2;
		//Checking whether m is our answer
		if (f(m) == 0) {
			return m;
		}
		//If not then changing the interval
		else if (f(l) * f(m) < 0) {
			r = m;
		}else {
			l = m;
		}
	}
	return l;
}
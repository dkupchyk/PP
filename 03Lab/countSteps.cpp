#include <cmath>

int integSteps(double x, double eps) {
	int steps = 0;
	double n = 1, next = x;
	while (fabs(next *= ((-x * x) * (2 * n - 1)) / (n * (2 * n + 1))) > eps) {
		n++; steps++;
	}
	return steps;
}

int expSteps(double x, double eps) {
	int steps = 0;
	double n = 1, next = 1;
	while ((fabs(next *= x / n)) > eps) {
		n++; steps++;
	}
	return steps;
}

int countQPower(int n) {
	int steps = 0;
	while (n > 0) {
		if (n % 2 == 1) {
			n--;
		}
		n /= 2;
		steps++;
	}
	return steps;
}

int expFracSteps(double x, double eps) {
	const double e = 2.71828182845904523536;
	int steps = 0;
	int intPart = abs(static_cast<int>(x));
	double fracPart = fabs(x) - intPart;
	steps += countQPower(intPart) + expSteps(fracPart, eps);
	if (x < 0) {
		steps++;
	}
	return steps;
}
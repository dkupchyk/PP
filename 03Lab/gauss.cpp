#include <cmath>

double integral(double x, double eps) {
	double n = 1, next = x, answer = next;
	while (fabs(next *= ((-x * x) * (2 * n - 1)) / (n * (2 * n + 1))) > eps) {
		answer += next;
		n++;
	}
	return answer;
}

double exponential(double x, double eps) {
	double n = 1, next = 1, answer = next;
	while ((fabs(next *= x / n)) > eps) {
		answer += next;
		n++;
	}
	return answer;
}


double quickPower(double x, int n) {
	double answer = 1;
	while (n > 0) {
		if (n % 2 == 1) {
			n--;
			answer *= x;
		}
		x *= x;
		n /= 2;
	}
	return answer;
}

double expFrac(double x, double eps) {
	const double e = 2.71828182845904523536;
	int intPart = abs(static_cast<int>(x));
	double fracPart = fabs(x) - intPart;
	double answer = quickPower(e, intPart) * exponential(fracPart, eps);
	if (x < 0) { 
		return 1 / answer;
	}
	return answer;
}

#include <iostream>
using namespace std;

double power(double x, int n) {
	double answer = 1;
	for (int i = 0; i < n; i++) {
		answer *= x;
	}
	return answer;
}

double quickPower(double x, int n) {
	double answer = 1;
	while(n > 0) {
		if (n % 2 == 1) {
			n--;
			answer *= x;
		}
		x *= x;
		n /= 2;
	}
	return answer;
}

double powerRec(double x, int n) {
	if (n == 1) { return x; }
	else { return x * powerRec(x, n-1); }
}

double quickPowerRec(double x, int n) {
	if (n == 1) { return x; }
	else if (n%2 == 0) { return quickPowerRec(x*x, n/2); }
	else { return x * quickPowerRec(x*x, (n - 1)/2); }
}



#include <cmath>
#include <cassert> 
#define M_PI (3.14159265358979323846)

//Обчислення арксинуса; Область визначення цієї функції –1 ≤ x ≤ 1 та не може бути більш розширена. 
double arcsin(double x, double eps) {
	double n = 1, next = x, answer = next;
	assert(x <= 1 && x >= -1);
	while ((fabs(next * (2 * n - 1) * (2 * n - 1) * 2 * n / (4 * n * n * (2 * n + 1))) * x * x) > eps) {
		next *= (((2 * n - 1) * (2 * n - 1) * 2 * n) / (4 * n * n * (2 * n + 1))) * x * x;
		answer += next;
		n++;
	}
	return answer;
}

//Обчислення арктангенса; Область визначення цієї функції –∞ < x < +∞. 
double arctg(double x, double eps) {
	double n = 1, next = x, answer = next;
	while ((fabs(next * ((-1)* x* x * (2 * n - 1))/(2*n+1))) > eps) {
		next *= ((-1) * x * x * (2 * n - 1)) / (2 * n + 1);
		answer += next;
		n++;
	}
	assert(answer >= - 1.57079633 && answer <= 1.57079633);
	return answer;
}

//Обчислення експоненційної функції; Область визначення цієї функції –∞ < x < +∞. 
double exponential(double x, double eps) {
	double n = 1, next = 1, answer = next;
	while ((fabs(next * x / n)) > eps) {
		next *= x / n;
		answer += next;
		n++;
	}
	assert(answer > 0);
	return answer;
}

//Обчислення логарифму натурального; Область визначення цієї функції 0 < x < +∞ та не може бути більш розширена. 
double ln(double x, double eps) {
	double n = 1, next = ((-2) * (1 - x)) / (1 + x), answer = next;
	assert(x > 0);
	while ((fabs(next * ((2 * n - 1) / (2 * n + 1)) * (((1 - x) * (1 - x)) / ((1 + x) * (1 + x))))) > eps) {
		next *= ((2 * n - 1) / (2 * n + 1)) * (((1 - x) * (1 - x)) / ((1 + x) * (1 + x)));
		answer += next;
		n++;
	}
	return answer;
}
#include <cmath>
#include <iostream>
#include <utility>
using namespace std;
#define M_PI (3.14159265358979323846)

//Oбчислення скінченої суми
double task_1(int n, double x) {
	if (n < 0) { return -1; }
	double next = 1;
	double answer = next;
	for (int k = 1; k <= n; k++) {
		next *= (-1) * x / k;
		answer += next;
	}
	return answer;
}

//Обчислення сінуса
double task_2(double eps, double x) {
	if (eps < 0) { return -1; }
	int n = 1;
	/*Оскільки після вводу певного числа радіан метод рахує функцію неправильно,
	потрібно врахувати періодичність, що прописано у наступному рядку.Тепер межі
	придатності даної функції визначені від -∞ до +∞.*/
	x = fmod(x, 2 * M_PI);
	double next = x, answer = next;
	while (fabs(next *= (-1) * x * x / (2 * n * (2 * n + 1))) > eps) {
		answer += next;
		n++;
	}
	return answer;
}

//Обчислення ділення натуральних чисел з остачею
pair<int, int> task_3(int number, int divider) {
	int curNumber = number, n = 0;
	//Інваріант циклу: number - div*n = curNumber
	while (curNumber >= divider) {
		curNumber -= divider;
		n++;
	}
	return make_pair(n, curNumber);
}

//Обчислення НСД двох натуральних чисел за алгоритмом Евкліда(використовуючи цикл)
int task_4_leap(int first, int second) {
	while (first != 0 && second != 0) {
		if (first > second) {
			first %= second;
		}
		else {
			second %= first;
		}
	}
	return first + second;
}

//Обчислення НСД двох натуральних чисел за алгоритмом Евкліда(використовуючи рекурсію)
int task_4_rec(int first, int second) {
	if (second == 0)
		return first;
	return task_4_rec(second, first % second);
}

//Обчислення полінома Чебишева
double task_5(int n, double x) {
	if (n < 0) { return -1; }
	else if (n == 0) { return 1; }
	else if (n == 1) { return x; }
	else {
		double prev_prev = 1;
		double prev = x;
		double cur = 0;
		for (int i = 2; i <= n; i++) {
			cur = 2 * x * prev - prev_prev;
			prev_prev = prev;
			prev = cur;
		}
		return cur;
	}
}

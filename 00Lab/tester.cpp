#include <iostream>
#include <utility>
#include "tasks.h";
using namespace std;

int main(void) {

	cout << "TASK 1" << endl;
	int n_task1[5] = { 0, 1, 4, 7, 12 };
	double x_task1[5] = { 3, 5, 2, 12, 23 };
	for (int i = 0; i < 5; i++) {
		cout << "If n = " << n_task1[i] << " and x = " << x_task1[i];
		cout << ", then result = " << task_1(n_task1[i], x_task1[i]) << endl;
	}

	cout << "\nTASK 2" << endl;
	double eps_task2[5] = { 0.0000001, 0.0000001, 0.0000001, 0.0000001, 0.000001 };
	double x_task2[5] = { 3, 50, 26, -12, -123 };
	for (int i = 0; i < 5; i++) {
		cout << "If eps = " << eps_task2[i] << " and x = " << x_task2[i];
		cout << ", then sin = " << task_2(eps_task2[i], x_task2[i]) << endl;
	}

	cout << "\nTASK 3" << endl;
	cout << "m = q * n + r" << endl;
	double number_task3[5] = { 1, 145, 2364, 98, 6722 };
	double divider_task3[5] = { 5, 5, 32, 3, 122 };
	for (int i = 0; i < 5; i++) {
		cout << "If m = " << number_task3[i] << " and q = " << divider_task3[i];
		cout << ", then n = " << task_3(number_task3[i], divider_task3[i]).first << " and r = " << task_3(number_task3[i], divider_task3[i]).second;
		//перевірка на правильність
		cout << "; Does the algorithm works correctly?";
		if (task_3(number_task3[i], divider_task3[i]).first * divider_task3[i] + task_3(number_task3[i], divider_task3[i]).second == number_task3[i]) {
			cout << " Yes." << endl;
		}
		else {
			cout << " No." << endl;
		}
	}

	cout << "\nTASK 4 LEAP" << endl;
	double firstL_task4[5] = { 1234, 65, 1200, 762, 890 };
	double secondL_task4[5] = { 130, 50, 600, 12, 99 };
	for (int i = 0; i < 5; i++) {
		double result = task_4_leap(firstL_task4[i], secondL_task4[i]);
		cout << "If first number  = " << firstL_task4[i] << " and second number = " << secondL_task4[i];
		cout << ", then gcd = " << result;
		//перевірка на правильність
		cout << "; Does the algorithm works correctly?";
		result++;
		while (result < firstL_task4[i] && result < secondL_task4[i]) {
			if (fmod(firstL_task4[i], result) == 0 && fmod(secondL_task4[i], result) == 0) {
				cout << " No." << endl;
			}
			result++;
		}
		cout << " Yes." << endl;
	}


	cout << "\nTASK 4 RECURSIVE" << endl;
	double firstR_task4[5] = { 1234, 65, 1200, 762, 890 };
	double secondR_task4[5] = { 130, 50, 600, 12, 99 };
	for (int i = 0; i < 5; i++) {
		double result = task_4_rec(firstR_task4[i], secondR_task4[i]);
		cout << "If first number  = " << firstR_task4[i] << " and second number = " << secondR_task4[i];
		cout << ", then gcd = " << result;
		//перевірка на правильність
		cout << "; Does the algorithm works correctly?";
		result++;
		while (result < firstR_task4[i] && result < secondR_task4[i]) {
			if (fmod(firstR_task4[i], result) == 0 && fmod(secondR_task4[i], result) == 0) {
				cout << " No." << endl;
			}
			result++;
		}
		cout << " Yes." << endl;
	}

	cout << "\nTASK 5" << endl;
	double n_task5[5] = { 1, 7, 3, 10, 9 };
	double x_task5[5] = { 5, 2, 8, -4.4, -123 };
	for (int i = 0; i < 5; i++) {
		cout << "If n = " << n_task5[i] << " and x = " << x_task5[i];
		cout << ", then result = " << task_5(n_task5[i], x_task5[i]) << endl;
	}

	return 0;
}
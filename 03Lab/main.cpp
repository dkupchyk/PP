#include <iostream>
#include <cmath>
#include "gauss.h"
using namespace std;
#define M_PI (3.14159265358979323846)

int main() {

	double eps = 0.000000001;
	double x_e[5] = {2.02, -5, 25.5, 74, -109.8844};
	double x_int[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "EXPONENTIAL\n" << endl;

	//Перевірка експоненти
	for (int i = 0; i < end(x_e) - begin(x_e); i++) {
		//Exponential function using series
		cout << "x = " << x_e[i] << ", e = " << exponential(x_e[i], eps);
		cout << ", steps = " << expSteps(x_e[i], eps) << endl;
		//Exponential function with dividing x into ineger and fractional part
		cout << "x = " << x_e[i] << ", eFrac = " << expFrac(x_e[i], eps);
		cout << ", steps = " << expFracSteps(x_e[i], eps) << endl;
		//Checking with cmath
		cout << "x = " << x_e[i] << ", cmath method = " << exp(x_e[i]) << endl;
	}

	/*After analyzing results for following numbers, we can notice that if x is extremely 
	big negative number the result is not the same with the cmath method result. This happens because 
	the numbers that we get are said to be incommensurable, which means their ratio is a irrational number.*/

	cout << "\nINTEGRAL\n" << endl;

	//Перевірка інтеграла 
	for (int i = 0; i < end(x_int) - begin(x_int); i ++) {
		cout << "x = " << x_int[i] << ", integral = " << integral(x_int[i], eps) << ", cmath method = ";
		//Checking with cmath
		cout << erf(x_int[i]) * (sqrt(M_PI) / 2) << endl;
	}

	/*After analyzing results for following numbers, it is easy to see that after x = 6 
	integral is not the same with the cmath method result. The reason is the same as 
	with the problem we had counting exponential function using series.*/

	return 0;
}

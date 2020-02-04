#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	double x[] = {2, 4, 6, 16, 36};
	int n[] = {1, 3, 16, 20, 99};

	int sizeOfArr = end(x) - begin(x);

	for (int i = 0; i < sizeOfArr; i++) {
		cout << "If x = " << x[i] << " and n = " << n[i] << " then:" << endl;

		cout << "power = " << "\t" << power(x[i], n[i]) << ", ";
		cout << "steps = " << countPower(n[i]) << endl;

		cout << "quickPower = " << "\t" << quickPower(x[i], n[i]) << ", ";
		cout << "steps = " << countQPower(n[i]) << endl;

		cout << "powerRec = " << "\t" << powerRec(x[i], n[i]) << ", ";
		cout << "steps = " << countPowerRec(n[i]) << endl;

		cout << "quickPowerRec = " << quickPowerRec(x[i], n[i]) << ", ";
		cout << "steps = " << countQPowerRec(n[i]) << "\n" << endl;

	    /*Conclusion: if we compare Power and Quick Power methods,
		it is easy to see that Quick Power is more convinient to use
		as it`s time complexity(both iterational and recursive) equals 
		O(log2(n)), while usual power (both iterational and recursive) has
		O(n) (where n is an exponent(power)).*/ 
	}
	return 0;
}
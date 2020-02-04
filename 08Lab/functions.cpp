#include "struct.h"

const Matrix2x2 matrix = { 1,1,1,0 };

void zet(double& y, double& x, unsigned int& n, int& k){
	if (n > 0){
		if (n % 2 == 1){
			y *= x; n--;
		}else{
			x *= x; 
			n /= 2;
		};
		k++;
		zet(y, x, n, k);
	}
}

double power(double x, unsigned int n, int& k){
	double y = 1;
	zet(y, x, n, k);
	return y;
}

void fib(int& f1, int& f2, unsigned int n, int& k){
	if (n >= 2){
		int f = f2; f2 += f1; f1 = f;
		k++;
		fib(f1, f2, n - 1, k);
	}
}

int Fibonaci(unsigned int n, int& k){
	int f0 = 0, f1 = 1;
	switch (n){
	case 0:
		return f0;
		break;
	case 1:
		return f1; break;
	default:
		fib(f0, f1, n, k);
		return f1;
	}
}

const Vector2 operator*(const Matrix2x2& a, const Vector2& v) {
	Vector2 res = { a._11 * v._1 + a._12 * v._2,
					a._21 * v._1 + a._22 * v._2 };
	return res;
};

Vector2 FibMatr(Vector2& f0,  int n) {
	if (n == 1) {
		return f0;
	}
	f0 = matrix * f0;
	return FibMatr(f0, n - 1);
}
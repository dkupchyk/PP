#include "structures.h"

const Matrix2x2 operator*(const Matrix2x2& a, const Matrix2x2& b) {
	
	Matrix2x2 res = { a._11 * b._11 + a._12 * b._21, a._11 * b._21 + a._12 * b._22,
	                  a._21 * b._11 + a._22 * b._21, a._21 * b._21 + a._22 * b._22 };
	return res;
}

const Vector2 operator*(const Matrix2x2& a, const Vector2& v) {
	Vector2 res = { a._11 * v._1 + a._12 * v._2,
		            a._21 * v._1 + a._22 * v._2 };
	return res;
}

Matrix2x2 quickPower(Matrix2x2 x, int n) {
	Matrix2x2 answer = {1};
	while (n > 0) {
		if (n % 2 == 1) {
			n--;
			answer = answer*x;
		}
		x = x*x;
		n /= 2;
	}
	return answer;
}

int FibMatr(int n) {
	Matrix2x2 matrix = { 1,1,1,0 };
	Vector2 vect = { 1, 0 };
	Vector2 fibonacci = quickPower(matrix, n - 1) * vect;
	return fibonacci._1;
}

int FibRec(int n){
	if (n == 0) {
		return 0;
	}else if (n == 1) {
		return 1;
	}else {
		return FibRec(n - 1) + FibRec(n - 2);
	}
}
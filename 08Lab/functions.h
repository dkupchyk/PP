#pragma once
#include "struct.h"

Vector2 FibMatr(Vector2& f0,int n);
const Vector2 operator*(const Matrix2x2& a, const Vector2& v);
void zet(double& y, double& x, unsigned int& n, int& k);
double power(double x, unsigned int n, int& k);
//void fib(int& f1, int& f2, unsigned int n, int& k);
int Fibonaci(unsigned int n, int& k);
#include <stdlib.h>
#include <cassert>
#include <iostream>
using namespace std;

void fillArray(double* coeff, size_t size){
	for (unsigned int i = 0; i < size; i++) {
		coeff[i] = (double)(rand() / (double(RAND_MAX) + 1.0) - rand() % 2) * 10 ;
	}
}

//Counting sum when x = -1 or x = 1
double sum(double* coeff, size_t size, double x) {
	double a = coeff[0];
	double answer = a;
	for (unsigned int i = 1; i < size; i++) {
		a = coeff[i];
		if ((x == -1) && (i % 2 == 1)) {
			a = -a;
		}
		answer += a;
	}
	return answer;
}

double horner(double* coeff, size_t size, double x ) {
	double bNext = coeff[size - 1];
	double bPrev = 0;
	for (int nCur = size - 2; nCur >= 0; nCur--) {
		bPrev = coeff[nCur] + x * bNext;
		bNext = bPrev;
	}
	assert(((x == 1) || (x == -1)) ? (bNext == sum(coeff, size, x)) : true);
	return bNext;
}

#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

//Method that prints out an array
void printArray(double* arr, const int n) {
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i == n - 1) {
			cout << " ]" << endl;
		}
		else {
			cout << ", ";
		}
	}
}

//Method checks whether all element that are in the first array are also in the second
bool checkValues(double* unsorted, double* sorted, const int n) {
	sort(unsorted, unsorted + n);
	for (int i = 0; i < n; i++) {
		if (unsorted[i] != sorted[i]) {
			return false;
		}
	}
	return true;
}

//Method checks whether an array is sorted in ascending order
bool isSorted(double* arr, const int n) {
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i+1]) {
			return false;
		}
	}
	return true;
}

//Method that copies elements from the first array into the second 
void copyArray(double* prevArr, double* newArr,  const int n) {
	for (int i = 0; i < n; i++) {
		newArr[i] = prevArr[i];
	}
}

//Method that fills in an array with random numbers
void fillArray(double* arr, const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = (double)(rand() / (double(RAND_MAX) + 1.0) - rand() % 2) * 10;
	}
}

//Method that merges two sequences of elements into one
void merge(double* first, double* second, int l, int m, int r) {
	int i = l;
	int j = m + 1;
	for (int k = l; k <= r; k++) {
		if (i > m) {
			second[k] = first[j];
			j++;
		}
		else if (j > r) {
			second[k] = first[i];
			i++;
		}else if (first[i] < first[j]) {
			second[k] = first[i];
			i++;
		}else {
			second[k] = first[j];
			j++;
		}
	} 
}

//Merge sort 
void mergeSort(double* arr, const int n) {
	double* unsorted = new double[n];
	double* newArr = new double[n];
	copyArray(arr, unsorted, n);
	copyArray(arr, newArr, n);

	bool findPair = true;
	int l, m, r;
	while (!isSorted(newArr, n)) {
		l = 0;
		m = l;
		r = m + 1;
		while (l < n) {
			if ((m + 1) < n) {
				//Finding the first part of a pair
				while (arr[m] <= arr[m + 1]) {
					m++;
					if (m + 1 >= n) {
						findPair = false;
						break;
					}
				}
			}else {
				findPair = false;
			}if (findPair) {
				r = m + 1;
				//Finding the second part of a pair
				while ((r + 1) < n && arr[r] <= arr[r + 1]) {
					r++;
				}
				//Merging them
				merge(arr, newArr, l, m, r);
			}

			//Changing left, middle and right values
			l = r + 1;
			m = l;
			r = m + 1;
			findPair = true;
		}
		copyArray(newArr, arr, n);
	}
	assert(isSorted(arr, n) && checkValues(unsorted, arr, n));
	delete[] unsorted;
	delete[] newArr;
	unsorted = 0;
	newArr = 0;
}
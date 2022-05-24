#include "Bubble.h"

int main() {

	int size = 10;
	int* int_arr = new int[size];

	for (int i = 0; i < size; i++) {
		int_arr[i] = rand() * pow(-1, rand() % 2);
	}

	cout << "Int Array: \n\n";
	PrintArray(int_arr, size);

	double* double_arr = new double[size];

	for (int i = 0; i < size; i++) {
		double_arr[i] = rand() * pow(-1, rand() % 2) / pow(10, rand() % 3);
	}

	cout << "Double Array: \n\n";
	PrintArray(double_arr, size);
	
	BubbleSort(int_arr, size);
	BubbleSort(double_arr, size);

	cout << "Sorted Int Array: \n\n";
	PrintArray(int_arr, size);
	cout << "Sorted Double Array: \n\n";
	PrintArray(double_arr, size);


}
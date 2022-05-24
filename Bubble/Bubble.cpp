#include "Bubble.h"

void BubbleSort(int* arr, int size)
{
	int temp; 			// временная переменная 
	bool sorted = false;
	// переменная - индикатор отсортированности массива

	while (!sorted) {		// пока массив не отсортирован
		sorted = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				// если последующий элемент меньше предыдущего
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				// меняем местами два элемента
				sorted = false;
				// массив может быть не отсортирован
			}
		}
		size--; 	// уменьшаем размер обрабатываемого массива
	}
}

void BubbleSort(double* arr, int size)
{
	double temp; 			// временная переменная 
	bool sorted = false;
	// переменная - индикатор отсортированности массива

	while (!sorted) {		// пока массив не отсортирован
		sorted = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				// если последующий элемент меньше предыдущего
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				// меняем местами два элемента
				sorted = false;
				// массив может быть не отсортирован
			}
		}
		size--; 	// уменьшаем размер обрабатываемого массива
	}
}

void PrintArray(int* arr, int size)
{
	for (int index = 0; index < size; index++) {
		cout << setw(10) << arr[index];
		//вывод значения соответствующего элемента
		if (index % 10 == 9) cout << '\n';
		//переход на новую строку после 10го элемента
	}
	cout << "\n";
	//дополнительный отступ
}

void PrintArray(double* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(10) << arr[i];
		//вывод значения соответствующего элемента
		if (i % 10 == 9) cout << '\n';
		//переход на новую строку после 10го элемента
	}
	cout << "\n";
	//дополнительный отступ
}
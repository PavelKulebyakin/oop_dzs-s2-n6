#include "Bubble.h"

void BubbleSort(int* arr, int size)
{
	int temp; 			// ��������� ���������� 
	bool sorted = false;
	// ���������� - ��������� ����������������� �������

	while (!sorted) {		// ���� ������ �� ������������
		sorted = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				// ���� ����������� ������� ������ �����������
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				// ������ ������� ��� ��������
				sorted = false;
				// ������ ����� ���� �� ������������
			}
		}
		size--; 	// ��������� ������ ��������������� �������
	}
}

void BubbleSort(double* arr, int size)
{
	double temp; 			// ��������� ���������� 
	bool sorted = false;
	// ���������� - ��������� ����������������� �������

	while (!sorted) {		// ���� ������ �� ������������
		sorted = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				// ���� ����������� ������� ������ �����������
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				// ������ ������� ��� ��������
				sorted = false;
				// ������ ����� ���� �� ������������
			}
		}
		size--; 	// ��������� ������ ��������������� �������
	}
}

void PrintArray(int* arr, int size)
{
	for (int index = 0; index < size; index++) {
		cout << setw(10) << arr[index];
		//����� �������� ���������������� ��������
		if (index % 10 == 9) cout << '\n';
		//������� �� ����� ������ ����� 10�� ��������
	}
	cout << "\n";
	//�������������� ������
}

void PrintArray(double* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(10) << arr[i];
		//����� �������� ���������������� ��������
		if (i % 10 == 9) cout << '\n';
		//������� �� ����� ������ ����� 10�� ��������
	}
	cout << "\n";
	//�������������� ������
}
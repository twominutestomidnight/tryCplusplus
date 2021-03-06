#include "pch.h"
#include <iostream>

using namespace std;
void StrReverse(char* str);
void DigitsReverse(int* arr,int size);
void BubbleSort(int* arr, int size);
void SelectionSort(int* arr, int size);
void InsertSort(int* arr, int size);
int linearSearch(int* arr, int size,int key);
int binarySearch(int* arr, int size, int key);
int fibo(int n);



int main()
{
	int choice;
	cout << "change task : ";
	cin >> choice;

	switch (choice) {
	case 1:
	{
		cin.clear();
		cin.ignore();
		char inputString[255];
		cout << "enter string : ";
		cin.getline(inputString, size(inputString));
		if (inputString[0] != '\0') {
			StrReverse(inputString);
			std::cout << "reversed string : " << inputString << std::endl;
			return 0;
		}
		else {
			std::cout << "input is empty" << std::endl;
		}
	}
	break;

	case 2:
	{
		int size = 5;
		cout << "enter count of numbers : ";
		cin >> size;
		int * arr = new int[size];
		cout << "enter numbers : ";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		std::cout << std::endl;
		DigitsReverse(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		delete[] arr;
		return 0;

	}
	break;
	case 3:
	{
		int size2 = 5;
		cout << "enter count of numbers : ";
		cin >> size2;
		int * arr2 = new int[size2];

		/*
		cout << "enter numbers : ";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		*/
		for (int i = 0; i < size2; i++)
		{
			arr2[i] = rand() % 100 + 1;
		}
		for (int i = 0; i < size2; i++)
		{
			cout << arr2[i] << " ";
		}
		std::cout << std::endl;
		BubbleSort(arr2, size2);

		for (int i = 0; i < size2; i++)
		{
			cout << arr2[i] << " ";
		}
		delete[] arr2;
		return 0;
	}
	break;



	case 4:
	{
		int size3 = 5;
		cout << "enter count of numbers : ";
		cin >> size3;
		int * arr3 = new int[size3];

		/*
		cout << "enter numbers : ";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		*/
		for (int i = 0; i < size3; i++)
		{
			arr3[i] = rand() % 100 + 1;
		}
		for (int i = 0; i < size3; i++)
		{
			cout << arr3[i] << " ";
		}
		std::cout << std::endl;
		SelectionSort(arr3, size3);

		for (int i = 0; i < size3; i++)
		{
			cout << arr3[i] << " ";
		}
		delete[] arr3;
		return 0;
	}
	break;
	case 5:
	{
		int size4 = 5;
		cout << "enter count of numbers : ";
		cin >> size4;
		int * arr4 = new int[size4];

		/*
		cout << "enter numbers : ";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		*/
		for (int i = 0; i < size4; i++)
		{
			arr4[i] = rand() % 100 + 1;
		}
		for (int i = 0; i < size4; i++)
		{
			cout << arr4[i] << " ";
		}
		std::cout << std::endl;
		InsertSort(arr4, size4);

		for (int i = 0; i < size4; i++)
		{
			cout << arr4[i] << " ";
		}
		delete[] arr4;
		return 0;
	}
	break;
	case 6:
	{
		int size5 = 5;
		cout << "enter count of numbers : ";
		cin >> size5;
		int * arr5 = new int[size5];
		int key;

		/*
		cout << "enter numbers : ";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		*/
		for (int i = 0; i < size5; i++)
		{
			arr5[i] = rand() % 100 + 1;
		}

		for (int i = 0; i < size5; i++)
		{
			cout << arr5[i] << " ";
		}
		std::cout << std::endl;
		cout << "enter key: ";
		cin >> key;
		std::cout << std::endl;
		cout << "index of value: " << linearSearch(arr5, size5, key) << endl;

		
		delete[] arr5;
		return 0;
	}
	break;

	case 7:
	{
		int size6 = 5;
		cout << "enter count of numbers : ";
		cin >> size6;
		int * arr6 = new int[size6];
		int key;

		/*
		cout << "enter numbers : ";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		*/
		for (int i = 0; i < size6; i++)
		{
			arr6[i] = rand() % 100 + 1;
		}

		for (int i = 0; i < size6; i++)
		{
			cout << arr6[i] << " ";
		}
		std::cout << std::endl;
		InsertSort(arr6, size6);
		for (int i = 0; i < size6; i++)
		{
			cout << arr6[i] << " ";
		}
		std::cout << std::endl;
		cout << "enter key: ";
		cin >> key;
		cout << "index of value: " << binarySearch(arr6, size6, key) << endl;

		delete[] arr6;
		return 0;
	}
	break;


	case 8:
	{
		int n;
		cout << "enter n : ";
		cin >> n;
		cout << "fibo : " << fibo(n) << endl;
		return 0;
	}
	break;
	}


}


void StrReverse(char* str)
{
	char tmp=' ';
	int size = strlen(str);
	for (int i = 0; i < size / 2; i++) {
		tmp = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = tmp;
	}
	
}

void DigitsReverse(int* arr, int size)
{
	int tmp;
	for (int i = 0; i < size / 2; i++) {
		tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}

}


void BubbleSort(int* arr, int size)
{
	//int last_index = size;
	int tmp;
	for (int i = 0; i < size-1 ; i++) {
		bool flag = 0;
		for (int j = 0; j < size-1-i; j++) {
			if (arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
			
		}
		if (flag == 0) {
			break;
		}
	}

}


void SelectionSort(int* arr, int size)
{
	//int last_index = size;
	int tmp;
	for (int i = 0; i < size - 1; i++) {
		bool flag = 0;
		int min_ind = i;
		for (int j = i+1; j < size; j++) {
			if (arr[j] < arr[min_ind]) {
				min_ind = j;
				flag = 1;
			}

		}
		if (flag == 0) {
			break;
		}
		if (i != min_ind) {
			tmp = arr[i];
			arr[i] = arr[min_ind];
			arr[min_ind] = tmp;

		}

	}

}




void InsertSort(int* arr, int size)
{
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			arr[j] = key;
			j--;
		}
	}
}

int linearSearch(int* arr, int size,int key)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}



int binarySearch(int* arr, int size, int key)
{

	int left = 0;
	int right = size;
	int mid = 0;
	while (left!=right)
	{
		mid = (left + right) / 2;	
		cout << "mid : " << mid << ",value : "<< arr[mid] <<endl;
		if (arr[mid] == key) {
			return mid;
		}
		if (arr[mid] > key) {
			right =  mid;
		}
		if (arr[mid] < key) {
			left =  mid;
		}
		
	}
	return -1;

}


int fibo(int n) {
	if (n < 2) {
		return 1;
	}
		
	return fibo(n - 1) + fibo(n - 2);
}
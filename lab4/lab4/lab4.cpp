//#include "lab4.h"
// 
//int posArr[sz];
//
//int main()
//{
//	srand(time(0));
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int* arr = new int[sz];
//	int n;
//
//
//	cout << "Введите размер массива(1-100) > ";
//	cin >> n;
//	while (n < 1 || n>99) {
//		cout << "Вы ввели неверный размер, попробуйте ещё раз >";
//		cin >> n;
//	}
//	cout << "Как хотите заполнить массив?:" << endl << "1 > С клавиатуры" << endl << "2 > Случайным образом" << endl << ">";
//	int checkInput;
//	cin >> checkInput;
//	while (checkInput != 1 && checkInput != 2) {
//		cout << "Вы ввели неправильное значение, попробуйте ещё раз >";
//		cin >> checkInput;
//	}
//	switch (checkInput) {
//	case(1): {
//		cout << "Введите элементы массива" << endl << "> ";
//		for (int i = 0; i < n; i++)
//			cin >> *(arr + i);
//		break;
//	}
//	case(2): {
//		for (int i = 0; i < n; i++)
//			*(arr + i) = rand() % 40 - 20;
//		cout << "> ";
//		for (int i = 0; i < n; i++)
//			cout << *(arr + i) << " ";
//		cout << endl;
//	}
//	}
//
//	cout << "Количество подходящих чисел >" << func(arr, n) << endl;
//	cout << " Массив положительных числел:" << endl;
//	for (int i = 0; i < n; i++)
//		cout << *(posArr + i) << " ";
//
//	return 0;
//
//}

#include <iostream>
using namespace std;


int array[33];
if (&array[4] < &array[23]) {
    cout << "Привіт Світ" << endl;
}
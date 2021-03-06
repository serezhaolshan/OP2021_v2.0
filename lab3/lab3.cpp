#include<iostream>
#include<Windows.h>
#include<ctime>
#include<utility>
#include<iomanip>

#define sz 100

using namespace std;

int posArr[sz];

int func(int *array, int size) {
	int counter = 0;
	int positive = 0;
	for (int i = 1; i < size-1; i++) {
		if (*(array + i) < *(array + (i - 1)) && *(array + i) < *(array + (i + 1))) {
			cout << "Индекс > " << i << endl << "Элемент:" << *(array + i)<< endl;
			counter++;
		}
	}
	for (int i = 0; i < size; i++) {
		if (*(array + i) > 0) {
			*(posArr + positive) = *(array + i);
			positive++;
		}
	}

	return counter;
}

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[sz], n;

	cout << "Введите размер массива(1-100) > ";
	cin >> n;
	while (n < 1 || n>99) {
		cout << "Вы ввели неверный размер, попробуйте ещё раз >";
		cin >> n;
	}
	cout << "Как хотите заполнить массив?:" << endl << "1 > С клавиатуры" << endl << "2 > Случайным образом" << endl << ">";
	int checkInput;
	cin >> checkInput;
	while (checkInput != 1 && checkInput != 2) {
		cout << "Вы ввели неправильное значение, попробуйте ещё раз >";
		cin >> checkInput;
	}
	switch (checkInput) {
		case(1): {
			cout << "Введите элементы массива" << endl << "> ";
			for (int i = 0; i < n; i++)
				cin >> *(arr + i);
			break;
		}
		case(2): {
			for (int i = 0; i < n; i++)
				*(arr + i) = rand() % 40 - 20;
			cout << "> ";
			for (int i = 0; i < n; i++)
				cout << *(arr + i) << " ";
			cout << endl;
		}
	}

	cout << "Количество подходящих чисел >" << func(arr, n) << endl;
	cout << " Массив положительных числел:" << endl;
	for (int i = 0; i < n; i++)
		cout << *(posArr + i) << " ";

	delete[] posArr;
	delete[] arr;

	return 0;

}


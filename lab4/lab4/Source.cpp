#include<iostream>
#include<Windows.h>
#include<ctime>
#include<utility>
#include<iomanip>
#include "lab4head.h"

#define sz 100

using namespace std;

int posArr[sz];

int func(int* array, int size) {
	int counter = 0;
	int positive = 0;
	for (int i = 1; i < size - 1; i++) {
		if (*(array + i) < *(array + (i - 1)) && *(array + i) < *(array + (i + 1))) {
			cout << "Индекс > " << i << endl << "Элемент:" << *(array + i) << endl;
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
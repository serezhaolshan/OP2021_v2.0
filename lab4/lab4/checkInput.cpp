#include "lab4head.h"	

using namespace std;


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
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<cstring>
#include<windows.h>
#include<stdio.h>
#include<ctime>
#include<utility>
#include<array>
#include<cstring>
#include<string.h>
#include<stdlib.h>

#define N 30
#define str_sz 15



using namespace std;
int k = 0, mn = 0, j = 0, sz = 0;

char scс[str_sz] = { 'A','B','C','D','E','F','G','H','I','J' };
float apprWeight[str_sz] = { 32,1.25,0.2,0.03,3.45,1.93,5.82,9.83, 7.52, 4.62 };
float percent[str_sz] = { 0.00002,0.03,73.2,2.2,2.9,4.81,99.9,81.2, 0.002, 98.1 };
unsigned long long numberOfStars[str_sz] = { 55000,12000000000, 293000000000,55000000000, 120391278, 9213218321, 12832138, 21932173, 2198321, 371123 };

struct Space {
	char sc[str_sz];
	float percent, apprWeight;
	unsigned long long numberOfStars;
};
struct Space ms[N], x;

void random_filling(Space);
void keyboard_filling(Space);
void outputting(Space, int sz);
void sorting(Space, int sz);

void random_filling(Space* ms) {
	srand(time(0));
	int size = rand() % 7 + 1;
	cout << "Количество элементов: " << size << endl;
	int i_mean[str_sz];
	bool b_mean[str_sz];
	for (int i = 0; i < size; ++i) {
		i_mean[i] = i;
		b_mean[i] = false;
	}
	for (int h = 0; h < size; ++h) {
		int r;
		r = rand() % 8;
		while (b_mean[r])
			r = rand() % 8;
		b_mean[r] = true;
		char temp[str_sz];
		for (int i = 0; i < str_sz; ++i)
			temp[i] = '\0';
		string ss;
		ss.clear();
		int str_size = strlen(ms[h].sc);
		ss = ms[r].sc;
		for (int i = 0; i < str_size; ++i)
			temp[i] = ss[i];
		ss.clear();
		strcpy(ms[h].sc, temp);
		ms[h].sc[h] = scс[r];
		ms[h].percent = percent[r];
		ms[h].apprWeight = apprWeight[r];
		ms[h].numberOfStars = numberOfStars[r];
	}
	cout << "Структура заполнена" << endl;
	sz = size;
}
void keyboard_filling(Space* ms) {
	int size = 0;
	for (int i = 0; i < 10; ++i) {
		cout << i + 1 << ".  Введите: спектральный класс, Приблизительную массу , Часть , Численность > ";

		cin >> ms[i].sc;
		if (!strcmp(ms[i].sc, "***")) break;
		cin >> ms[i].apprWeight >> ms[i].percent >> ms[i].numberOfStars;
		size++;
	}
	sz = size;
}
void outputting(Space* ms, int size) {
	printf("--------------------------------------------------------------------------\n");
	printf("|Приблизительное количество звезд разных спектральных классов в Галактике|\n");
	printf("|------------------------------------------------------------------------|\n");
	printf("| Спектральный класс | Приблизительная масса | Часть  |    Численность   |\n");

	for (int i = 0; i < size; ++i) {
		printf("|--------------------|-----------------------|--------|------------------|\n");
		printf("| %18c | %21f | %6.5Lf| %16lli |\n", ms[i].sc[i], ms[i].apprWeight, ms[i].percent, ms[i].numberOfStars);
	}
	printf("|------------------------------------------------------------------------|\n");
	printf("|        Примечание: не показаны данные для классов: B, A, G, K          |\n");
	printf("--------------------------------------------------------------------------\n\n\n\n");
}
/*void sorting(Space* ms, int size) {
	char slu[str_sz];
	for (int i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (strcmp(ms[i].sc, ms[j].sc) > 0)
			{
				strcpy(slu, ms[i].sc);
				strcpy(ms[i].sc, ms[j].sc);
				strcpy(ms[j].sc, slu);
			}
	for (int i = 0; i < size-1; ++i) {
		mn = i;
		for (j = i + 1; j < size; ++j)
			if (strcmp(ms[mn].sc, ms[j].sc) > 0)mn = j;
		if (mn > i) {
			strcpy(x.sc, ms[i].sc);
			x.percent = ms[i].percent;
			x.apprWeight = ms[i].apprWeight;
			x.numberOfStars = ms[i].numberOfStars;
			strcpy(ms[i].sc, ms[mn].sc);
			ms[i].percent = ms[mn].percent;
			ms[i].apprWeight = ms[mn].apprWeight;
			ms[i].numberOfStars = ms[mn].numberOfStars;
			strcpy(ms[mn].sc, x.sc);
			ms[mn].percent = x.percent;
			ms[mn].apprWeight = x.apprWeight;
			ms[mn].numberOfStars = x.numberOfStars;

		}

		strcpy(x.name, mm[i].name); x.sc = mm[i].sc;
		x.cnt = mm[i].cnt; x.sq = mm[i].sq;
		strcpy(mm[i].name, mm[m].name); mm[i].sc = mm[m].sc;
		mm[i].cnt = mm[m].cnt; mm[i].sq = mm[m].sq;
		strcpy(mm[m].name, x.name); mm[m].sc = x.sc;
		mm[m].cnt = x.cnt; mm[m].sq = x.sq;
	}*/
//int comp1(const void* a, const void* b)
//{
//	cout << endl << "Структура отсортирована" << endl << endl;
//	return strcmp(*(char**)a, *(char**)b);
//	
//}
int compare_prices(const void* sc1, const void* sc2) {
	const char* name1 = ((const Space*)sc1)->sc;
	const char* name2 = ((const Space*)sc1)->sc;
	return strcmp(name1, name2);
}

int main() {

	system("chcp 1251");
	system("cls");
	
	int checker;

	while (true) {
		cout << "Выберите действие: " << endl;
		cout << "1. Заполнение структуры случайным образом" << endl;
		cout << "2. Заполнение структуры с клавиатуры" << endl;
		cout << "3. Вывести структуру" << endl;
		cout << "4. Отсортировать структуру" << endl;
		cout << "5. Очистить консоль" << endl;
		cout << "Для выхода из программы введите 0" << endl << "> ";

		cin >> checker;

		//if (checker < 0 || checker>5) {
		//	cout << "Введено неверное значение. Попробуйте ещё раз: ";
		//	continue;
		//}
		switch (checker) {
			case(0): {
				return 0;
			}
			case(1): {
				random_filling(ms);
				break;
			}
			case(2): {
				keyboard_filling(ms);
				break;
			}
			case(3): {
				outputting(ms, sz);
				break;
			}
			case(4): {
				//sorting(ms, sz);
				qsort(ms, sz, sizeof(char**), &compare_prices);
				break;
			}
			case(5): {
				system("cls");
				break;
			}
			default: {
				cout << "Введено неверное значение. Попробуйте ещё раз: ";
				continue;
			}
		}
		//if (checker == 0)
		//	return 0;
		//if (checker == 1)
		//	random_filling(ms);
		//else if (checker == 2)
		//	keyboard_filling(ms);
		//else if (checker == 3)
		//	outputting(ms, sz);
		//else if (checker == 4)
		//	sorting(ms, sz);
		//else if (checker == 5)
		//	system("cls");
	}
}
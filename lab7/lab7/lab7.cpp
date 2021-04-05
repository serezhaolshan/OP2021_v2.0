#include "lab7.h"

char sc[str_sz] = { 'A','B','C','D','E','F','G','H','I','J' };
float apprWeight[str_sz] = { 32,1.25,0.2,0.03,3.45,1.93,5.82,9.83, 7.52, 4.62 };
float percent[str_sz] = { 0.00002,0.03,73.2,2.2,2.9,4.81,99.9,81.2, 0.002, 98.1 };
unsigned long long numberOfStars[str_sz] = { 55000,12000000000, 293000000000,55000000000, 120391278, 9213218321, 12832138, 21932173, 2198321, 371123 };


#define str_sz 15

using namespace std;


 

int sz = 0;

int main() {

	system("chcp 1251");
	system("cls");
	
	Space ms;


	int checker;

	while (true) {
		cout << "Выберите действие: " << endl;
		cout << "1.Ввод с экрана и запись в файл" << endl;
		cout << "2. Ввод случайным образом и запись в файл." << endl;
		cout << "3. Добавить запись в начало файла." << endl;
		cout << "4. Добавить запись в конец файла." << endl;
		cout << "5. Печать одной записи из файла по номеру." << endl;
		cout << "6. Печать всех записей из файла" << endl;
		cout << "Для выхода из программы введите 0" << endl << "> ";

		cin >> checker;
		switch (checker) {
			case(0): {
				return 0;
			}
			case(1): {
				keyboard_filling();
				break;
			}
			case(2): {
				random_filling();
				break; 
			}
			case(3): {
				toBegin();
				break;
			}
			case(4): {
				toTheEnd();
				break;
			}
			case(5): {
				cout << "Введите номер строки которую хотите получить >";
				int sz = 0, size;
				string str;
				cin >> size;
				ifstream file("file.txt");
				while (getline(file, str))
					sz++;
				while (size > sz || size < 0) {
					cout << "Вы ввели неверное значение попробуйте ещё раз" << endl << ">";
					cin >> size;
				}
				file.close();
				strOut(size);
			}
			case(6): {
				outAll();
				break;
			}
			case(7): {
				return 0;
			}
			case(8): {
				clean();
				break; 
			}
			default: {
				cout << "Введено неверное значение. Попробуйте ещё раз: ";
				break;
			}
		}
	}

	//delete[] ms;


}
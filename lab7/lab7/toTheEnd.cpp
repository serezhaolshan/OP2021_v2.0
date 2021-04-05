#include"lab7.h"
void toTheEnd() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Space ms;
	cout << "Введите: спектральный класс, Приблизительную массу , Часть , Численность > ";
	cin >> ms.sc >> ms.apprWeight >> ms.percent >> ms.numberOfStars;
	ofstream fout("file.txt", ios_base::app);
	fout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
	fout.close();
}
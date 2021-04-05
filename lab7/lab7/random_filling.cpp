#define _CRT_SECURE_NO_WARNINGS
#include"lab7.h"
extern char sc[str_sz];
extern float percent[str_sz];
extern float apprWeight[str_sz];
extern unsigned long long numberOfStars[str_sz];
void random_filling() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	
	Space ms;

	int size = rand() % 7 + 1;
	cout << "Количество элементов: " << size << endl;
	int i_mean[str_sz];
	bool b_mean[str_sz];
	for (int i = 0; i < size; ++i) {
		i_mean[i] = i;
		b_mean[i] = false;
	}
	for (int h = 0; h < size; ++h) {
		int r = 0;
		r = rand() % 8;
		while (b_mean[r])
			r = rand() % 8;
		b_mean[r] = true;
		char temp[str_sz];
		for (int i = 0; i < str_sz; ++i)
			temp[i] = '\0';
		string ss;
		ss.clear();
		int str_size = strlen(ms.sc);
		ss = sc;
		for (int i = 0; i < str_size; ++i)
			temp[i] = ss[i];
		ss.clear();
		strcpy(ms.sc, temp);
		ms.sc[r] = sc[r];
		ms.percent = percent[r];
		ms.apprWeight = apprWeight[r];
		ms.numberOfStars = numberOfStars[r];

		if (!h) {
			ofstream fout("file.txt");
		}
		ofstream fout("file.txt", ios_base::app);
		fout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
		fout.close();
	}
	
	
}
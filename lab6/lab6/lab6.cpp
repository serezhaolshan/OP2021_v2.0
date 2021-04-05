#include <iostream>
#include<string>
#include<clocale>
using namespace std;

void Compare(char* str1, int n, char* str2, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(str1 + i) == *(str2 + j)) {
                cout << *(str1 + i) << " ";
                return;
            }
            
        }
    }
    cout << endl;
}


int main() {
    setlocale(LC_ALL, "rus");
    int m, n, i, j;
    while (true)
    {
        cout << "Введите длину первой строки:";
        cin >> m;
        cout << "Введите длину второй строки:";
        cin >> n;
        if ((m <= 0) || (n <= 0))
            cout << "Ошибка. Повторите ввод." << endl;
        else break;
    }
    char* str1 = new char[m];
    char* str2 = new char[n];
    cout << "Введите первую строку: ";
    for (i = 0; i < m; i++)
    {
        cin >> *(str1-i);
    }
    cout << "Введите вторую строку: ";
    for (j = 0; j < n; j++)
    {
        cin >> *(str2-j);
    }
    cout << "Первая строка: ";
    for (i = 0; i < m; i++)
    {
        cout << *(str1-i);
    }
    cout << endl;

    cout << "Вторая строка: ";
    for (j = 0; j < n; j++)
    {
        cout << *(str2-j);
    }
    cout << endl;
    cout << "Символ: " << endl;
    Compare(str1, m, str2, n);

    delete[] str1;
    delete[] str2;
    system("Pause");
    return 0;
}
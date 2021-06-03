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
    
    int m, n, i, j;
    while (true)
    {
        cout << "Enter first string's length";
        cin >> m;
        cout << "Enter second string's length";
        cin >> n;
        if ((m <= 0) || (n <= 0))
            cout << "Error. Incorrect input, please try again..." << endl;
        else break;
    }
    char* str1 = new char[m];
    char* str2 = new char[n];
    cout << "Enter first string ";
    for (i = 0; i < m; i++)
    {
        cin >> *(str1+i);
    }
    cout << "Enter second string ";
    for (j = 0; j < n; j++)
    {
        cin >> *(str2+j);
    }
    cout << "First string is: ";
    for (i = 0; i < m; i++)
    {
        cout << *(str1+i);
    }
    cout << endl;

    cout << "Second string is: ";
    for (j = 0; j < n; j++)
    {
        cout << *(str2+j);
    }
    cout << endl;
    cout << "Symbol: ";
    Compare(str1, m, str2, n);
    cout << endl;

    system("Pause");
    return 0;
}
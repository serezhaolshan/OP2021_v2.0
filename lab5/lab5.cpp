#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
/*
TYPE == 1 -> с двумерным как с одномерным
TYPE == 2 -> с двумерным как с двумерным
*/
#define TYPE 2
void f1(int** m, int sz)
{
    int i, j;
    int a, b;

    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            m[i][j] = rand() % 5;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            a = (i + 2) % 3;
            b = (j + 2) % 3;
            if (a == 0 && b == 0 && i + 1 < sz && j + 1 < sz)
            {

                m[i][j] = m[i - 1][j - 1] + m[i + 1][j + 1] + m[i - 1][j] + m[i][j - 1] + m[i][j + 1] + m[i + 1][j] + m[i - 1][j + 1] + m[i + 1][j - 1];
            }
        }
    }

    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void f2(int* z, int sz)
{
    int i, j;
    int a, b;
    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            z[i * sz + j + 1] = rand() % 5;
            printf("%d ", z[i * sz + j + 1]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            a = (i + 2) % 3;
            b = (j + 2) % 3;
            if (a == 0 && b == 0 && i + 1 < sz && j + 1 < sz)
            {
                z[i * sz + j + 1] = z[(i - 1) * sz + j] + z[(i + 1) * sz + j + 1 + 1] + z[(i - 1) * sz + j + 1] + z[i * sz + j] + z[i * sz + j + 2] + z[(i + 1) * sz + j + 1] + z[(i - 1) * sz + j + 2] + z[(i + 1) * sz + j];
                //m[i][j] = m[i - 1][j - 1] + m[i + 1][j + 1] + m[i - 1][j] + ||| m[i][j - 1] + m[i][j + 1] + m[i + 1][j] + m[i - 1][j + 1] + m[i + 1][j - 1];
            }
        }
    }

    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            printf("%d ", z[i * sz + j + 1]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int i, j, n;
    std::cout << "Enter size of matrix:" << std::endl;
    scanf("%d", &n);
#if TYPE == 1
    int* z = new int[n * n + 1];
    f2(z, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            printf("%d ", z[i * n + j + 1]);
        printf("\n");
    }
#else
    int** m;
    m = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        m[i] = (int*)malloc(n * sizeof(int));
    f1(m, n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) free(m[i]); free(m);
#endif
    return 0;
}
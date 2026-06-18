#include <stdio.h>

void bubble(int a[], int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

int main()
{
    int a[] = {5, 3, 1, 4, 2};

    bubble(a, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}
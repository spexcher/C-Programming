#include <stdio.h>

int linear(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int binary(int a[], int n, int x)
{
    int l = 0, r = n - 1, m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("%d\n", linear(a, 5, 4));
    printf("%d", binary(a, 5, 4));
}
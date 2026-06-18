#include <stdio.h>

int main()
{
    int a[5] = {1, -2, 0, 4, -5};
    int p = 0, n = 0, z = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
            p++;
        else if (a[i] < 0)
            n++;
        else
            z++;
    }

    printf("Positive=%d\nNegative=%d\nZero=%d", p, n, z);
    return 0;
}
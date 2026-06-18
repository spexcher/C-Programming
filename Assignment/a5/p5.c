#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 2, 3, 1};

    for (int i = 0; i < 5; i++)
    {
        int c = 0;

        for (int j = 0; j < 5; j++)
            if (a[i] == a[j])
                c++;

        if (c == 1)
            printf("%d ", a[i]);
    }

    return 0;
}
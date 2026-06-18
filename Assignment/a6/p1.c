#include <stdio.h>

int main()
{
    int t[2][7] = {
        {30, 31, 32, 33, 34, 35, 36},
        {25, 26, 27, 28, 29, 30, 31}};

    for (int i = 0; i < 2; i++)
    {
        printf("City %d: ", i + 1);
        for (int j = 0; j < 7; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}
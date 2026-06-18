#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;

    a = (int **)calloc(2, sizeof(int *));

    for (int i = 0; i < 2; i++)
        a[i] = (int *)calloc(2, sizeof(int));

    printf("%d", a[0][0]);

    return 0;
}
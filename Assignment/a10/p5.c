#include <stdio.h>

int main()
{
    FILE *f1 = fopen("in.txt", "r");
    FILE *f2 = fopen("out.txt", "w");

    int a[10], n = 0, t;

    while (fscanf(f1, "%d", &a[n]) == 1)
        n++;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

    for (int i = 0; i < n; i++)
        fprintf(f2, "%d ", a[i]);

    fclose(f1);
    fclose(f2);

    return 0;
}
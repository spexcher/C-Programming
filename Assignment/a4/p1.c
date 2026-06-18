#include <stdio.h>

int main()
{
    int n, sum = 0;

    do
    {
        scanf("%d", &n);
        sum += n;
    } while (n != 0);

    printf("Sum = %d", sum);
    return 0;
}
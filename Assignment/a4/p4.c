#include <stdio.h>

int main()
{
    int n, t, sum = 0, r;

    scanf("%d", &n);
    t = n;

    while (t > 0)
    {
        r = t % 10;
        sum += r * r * r;
        t /= 10;
    }

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
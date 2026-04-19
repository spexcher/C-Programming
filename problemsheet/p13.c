#include <stdio.h>
#include <math.h>
int main()
{
    int n, dig = 0, s = 0;
    scanf("%d", &n);
    int cp = n;
    while (cp > 0)
    {
        dig += 1;
        cp = cp / 10;
    }
    cp = n;
    while (cp > 0)
    {
        int r = cp % 10;
        s = s + pow(r, dig);
        cp = cp / 10;
    }

    if (s == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}

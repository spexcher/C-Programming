#include <stdio.h>

int factorial(int n)
{
    // int res = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     res = res * i;
    // }

    if (n == 1)
    {
        return 1;
    }

    int res = n * factorial(n - 1);
    return res;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("The factorial of %d is %d \n", n, factorial(n));
    return 0;
}

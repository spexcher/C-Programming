#include <stdio.h>

int fib(int x)
{
    // base case
    if (x == 1 || x == 2)
        return 1;
    // derived case
    return fib(x - 1) + fib(x - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("The %dth fibonacci number is %d \n", n, fib(n));
    return 0;
}

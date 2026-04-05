#include <stdio.h>

int print(int a, int b)
{
    return a + b;
    // printf("sum of %d and %d Is %d\n", a, b, a + b);
}
int main(int argc, char const *argv[])
{
    int res = print(10, 20);
    printf("sum of %d and %d Is %d\n", 10, 20, res);
    return 0;
}

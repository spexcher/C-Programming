#include <stdio.h>

int print1(int a, int b) // parameterized function with return type
{
    return a + b;
    // printf("sum of %d and %d Is %d\n", a, b, a + b);
}
int print2() // non parameterized function with return type
{
    return 10 + 20;
    // printf("sum of %d and %d Is %d\n", a, b, a + b);
}

void print3() // non parameterized function with no return type
{
    printf("sum of %d and %d Is %d\n", 10, 20, 10 + 20);
}
void print4(int a, int b) //  parameterized function with no return type
{
    printf("sum of %d and %d Is %d\n", a, b, a + b);
}
int main(int argc, char const *argv[])
{

    // use all of these prints accordingly
    int res = print1(10, 20);
    int res2 = print2();
    print3();
    print4(30, 40);

    
    return 0;
}

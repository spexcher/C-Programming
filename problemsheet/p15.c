#include <stdio.h>

int main()
{
    int u = 7;
    double p = u; // happens automatically so implicit

    float a = 5.2;
    float f = 2.9;
    int c = f;
    double res = (int)a + (int)f;
    printf("%d\n", c);



}
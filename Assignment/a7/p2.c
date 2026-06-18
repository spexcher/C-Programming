#include <stdio.h>

typedef struct
{
    float r, i;
} complex;

int main()
{
    complex a = {2, 3}, b = {1, 2};

    printf("Add = %.0f + %.0fi\n", a.r + b.r, a.i + b.i);
    printf("Sub = %.0f + %.0fi", a.r - b.r, a.i - b.i);

    return 0;
}
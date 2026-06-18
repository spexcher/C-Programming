#include <stdio.h>

int main()
{
    int a[5] = {2, 2, 1, 2, 2};
    int count = 0;

    for (int i = 0; i < 5; i++)
        if (a[i] == 2)
            count++;

    if (count > 5 / 2)
        printf("Majority Element = 2");
    else
        printf("No Majority Element");

    return 0;
}
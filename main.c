#include <stdio.h>

int main()
{
    int a = 234234235;
    int rem;
    int sum = 0;
    int cp = a;
    while (a != 0)
    {
        rem = a % 10;
        // sum+=rem;
        sum = sum + rem;
        // a/=10;
        a = a / 10;
    }
    printf("The sum of digits of %d is %d", cp, sum);
    return 0;
}

#include <stdio.h>

int main()
{
    int a = 10;
    // &a means address of a
    // scanf("%d",&a);
    // % p is used for address.
    // & means address of
    // &a that means address of a
    int *adda = &a;

    // address adda
    // i want to access the value present at this address
    // *adda
    // star mean value at
    printf("%p", adda);
    printf("%d", * adda);
    return 0;
}

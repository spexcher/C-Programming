#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello", b[20] = "World";

    strcat(a, b);

    printf("%s\n", a);
    printf("Length=%lu", strlen(a));

    return 0;
}
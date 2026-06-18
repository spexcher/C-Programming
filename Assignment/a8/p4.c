#include <stdio.h>

int main()
{
    char a[20] = "Hello", b[] = "World";
    char *p = a;

    while (*p)
        p++;
    for (int i = 0; b[i]; i++)
        *p++ = b[i];

    *p = '\0';

    printf("%s", a);

    return 0;
}
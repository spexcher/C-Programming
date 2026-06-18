#include <stdio.h>

int main()
{
    char ch = 'a';

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((ch - 'a') % 2 == 0)
                printf("%c ", ch);
            else
                printf("%c ", ch - 32);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
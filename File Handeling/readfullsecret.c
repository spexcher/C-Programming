#include <stdio.h>
#include <stdbool.h>
int main()
{
    FILE *p;
    p = fopen("meme.txt", "r");
    char secret;
    while (true)
    {
        secret = fgetc(p);
        printf("%c", secret);
        if (secret == EOF)
            break;
    }
    fclose(p);
    return 0;
}

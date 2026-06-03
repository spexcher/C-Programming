#include <stdio.h>

int main()
{
    /* code */
    FILE *p;
    p = fopen("meme.txt", "r");
    char secret[50];
    fgets(secret, 50, p);
    printf("%s", secret);
    fclose(p);
    return 0;
}

#include <stdio.h>

int main()
{
    /* code */
    FILE *p;
    p = fopen("meme.txt", "w");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");
    fprintf(p, "Anushka is bathroom singer\n");

    fclose(p);
    return 0;
}

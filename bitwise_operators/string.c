#include <stdio.h>

int main()
{
    char fullName[30];
    printf("Type your full name: \n");
    // wothpout space you can use scanf as well
    fgets(fullName, 30, stdin);
    // basic output
    printf("%s", fullName);
    return 0;
}

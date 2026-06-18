#include <stdio.h>

int main() {
    char s[20]="Hello", t[20];
    int i,len=0;

    while(s[len]!='\0')
        len++;

    for(i=0;s[i]!='\0';i++)
        t[i]=s[i];
    t[i]='\0';

    printf("Length=%d\n%s",len,t);

    return 0;
}
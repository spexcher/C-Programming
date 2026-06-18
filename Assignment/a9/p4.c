#include <stdio.h>

void rev(char s[],int i) {
    if(s[i]=='\0')
        return;

    rev(s,i+1);
    printf("%c",s[i]);
}

int main() {
    char s[]="HELLO";

    rev(s,0);

    return 0;
}
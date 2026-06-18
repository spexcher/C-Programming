#include <stdio.h>

void calc(int a,int b,int *s,int *p) {
    *s=a+b;
    *p=a*b;
}

int main() {
    int s,p;

    calc(2,3,&s,&p);

    printf("Sum=%d\nProduct=%d",s,p);

    return 0;
}
#include <stdio.h>

int main() {
    int a=10,b=20,*p=&a,*q=&b,t;

    t=*p;
    *p=*q;
    *q=t;

    printf("%d %d",a,b);

    return 0;
}
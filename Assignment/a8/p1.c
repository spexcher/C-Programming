#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5}, sum=0;
    int *p=a;

    for(int i=0;i<5;i++)
        sum += *(p+i);

    printf("Sum = %d",sum);

    return 0;
}
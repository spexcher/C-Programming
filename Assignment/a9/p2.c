#include <stdio.h>

int arm(int n) {
    int t=n,s=0,r;

    while(t) {
        r=t%10;
        s+=r*r*r;
        t/=10;
    }

    return s==n;
}

int main() {
    int n;
    scanf("%d",&n);

    if(arm(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
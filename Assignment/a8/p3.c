#include <stdio.h>

int main() {
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int *p=&a[0][0], *q=&b[0][0];

    printf("%d",(*p)*(*q));

    return 0;
}
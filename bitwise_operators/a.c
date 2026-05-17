#include <stdio.h>
int main()
{
    int a = 5;
    int b = 13;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    printf("AND %d OR %d XOR %d\n", c, d, e);

    int rs = 7892 >> 4;
    printf("7892 shifted right by 4 units is %d\n", rs);
    int ls = 543 << 8;
    printf("543 shifted left by 8 units is %d\n", ls);

    return 0;
}

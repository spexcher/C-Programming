#include <stdio.h>
int main()
{
    int a = 5;
    int b = 13;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    printf("AND %d OR %d XOR %d\n", c, d, e);

    int rs = 23675427 >> 6;
    printf("23675427 shifted right by 6 units is %d\n", rs);
    int ls = 543 << 8;
    printf("543 shifted left by 8 units is %d\n", ls);


    return 0;
}

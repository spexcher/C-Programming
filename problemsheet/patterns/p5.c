

// n=5
//      1
//     2 2
//    3 3 3
//   4 4 4 4
//  1 2 3 4 5
// n=5
//      A
//     A B
//    A B C
//   A B C D
//  A B C D E

#include <stdio.h>
int main()
{
    int n;
    int k = 1;
    scanf("%d", &n);
    int sp = n - 1;
    int ascA = (int)'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", (char)(ascA + k - 1));
        }
        sp--;
        printf("\n");
    }
    return 0;
}

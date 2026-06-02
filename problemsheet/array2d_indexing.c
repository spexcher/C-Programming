// #include <stdio.h>

// int main()
// {
//     int arr2[4][4];
//     for (int j = 0; j < 4; j++)
//         for (int k = 0; k < 4; k++)
//             arr2[j][k] = j + k;
//     for (int j = 0; j < 4; j++)
//     {
//         for (int k = 0; k < 4; k++)
//         {
//             printf("%d ", arr2[j][k]);
//         }
//         printf("\n");
//     }

//     printf("%d", *((*(arr2 + 1)) + 3));
//     return 0;
// }
// // call by address/ reference

#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i][i];
    }
    printf(" Result : % d \n ", sum);
    return 0;
}
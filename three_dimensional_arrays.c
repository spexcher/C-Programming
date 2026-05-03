#include <stdio.h>

int main()
{
    int arr2[3][4][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 5; k++)
                arr2[i][j][k] = i + j + k;
                
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("%d ", arr2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d", arr[i][j]);
    //     }
    // }

    return 0;
}
// call by address/ reference
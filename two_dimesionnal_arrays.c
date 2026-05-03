#include <stdio.h>

int main()
{
    int arr2[4][4];
    for (int j = 0; j < 4; j++)
        for (int k = 0; k < 4; k++)
            arr2[j][k] = j + k;

    arr2[0][3] = 45;

    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%d ", arr2[j][k]);
        }
        printf("\n");
    }

    int sum = 0;
    for (int j = 0; j < 4; j++)
        for (int k = 0; k < 4; k++)
            if (j == k)
                sum += arr2[j][k];

    printf("The sum of elements of the principal diagonal is %d \n", sum);
    sum = 0;
    for (int j = 0; j < 4; j++)
        for (int k = 0; k < 4; k++)
            if (j + k == 3)
                sum += arr2[j][k];

    printf("The sum of elements of the alternate diagonal is %d \n", sum);

    return 0;
}
// call by address/ reference
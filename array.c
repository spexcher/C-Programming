#include <stdio.h>

int main()
{
    // a sequence of same data type elements
    // int a[6] = {78,56,75,32,23,77};
    // printf("%d",*(a+1));
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
        printf("%p\t", arr + i);
    }



    // printf("the elements are\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d \n", *(arr + i));
    // }

    return 0;
}

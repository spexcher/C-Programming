// wap in input in an array and print sum of
// elements of that array using recursion
#include <stdio.h>
void inputarray(int *arr, int i, int n)
{
    if (i < n)
    {
        scanf("%d", arr);
        inputarray(arr + 1, i + 1, n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    inputarray(arr, 0, n);
    return 0;
}


#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int x;
    printf("Enter the element to search");
    scanf("%d", &x);

    int found = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            found = 1;
            index = i;
            // printf("Element found at index %d ", i);
            // return 0;
        }
    }
    if (found == 1)
    {
        printf("Element found at index %d ", index);
    }
    else
        printf("Element not found at index");

    return 0;
}

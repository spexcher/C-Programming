#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("Enter the size of the array %d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int x;
    printf("Enter the element to search");
    scanf("%d", &x);
    int l = 0;
    int r = n - 1;
    bool found = false;
    int foundindex = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            found = true;
            foundindex = mid;
        }
        if (arr[mid] < x)
            l = mid + 1;
        if (arr[mid] > x)
            r = mid - 1;
    }
    if (found == true)
        printf("Element found at index %d \n", foundindex);
    else
        printf("Element not found");
    return 0;
}

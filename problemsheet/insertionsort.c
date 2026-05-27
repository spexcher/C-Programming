#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);
        
    for (int i = 1; i < n; i++)
    {
        int cc = i;
        while (cc >= 1 && arr[cc] < arr[cc - 1])
        {
            int temp = arr[cc];
            arr[cc] = arr[cc - 1];
            arr[cc - 1] = temp;
            cc = cc - 1;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    return 0;
}

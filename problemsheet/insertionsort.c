#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    for (int j = 1; j < n; j++)
    {
        int bound = j;
        while (bound > 0)
        {
            if (arr[bound] < arr[bound - 1])
            {
                int temp = arr[bound];
                arr[bound] = arr[bound - 1];
                arr[bound - 1] = temp;
                //swap(arr[bound], arr[bound - 1]);
            }
            else
                break;
            bound--;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    return 0;
}

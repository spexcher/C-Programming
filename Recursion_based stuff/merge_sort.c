#include <stdio.h>
void mergetwosortedarrays(int *a, int l, int mid, int r)
{
    int b1 = mid - l + 1;
    int b2 = r - mid;
    int left[b1], right[b2];
    for (int i = 0; i < b1; i++)
        left[i] = a[l + i];
    for (int i = 0; i < b2; i++)
        right[i] = a[mid + 1 + i];
    int p1 = 0, p2 = 0, k = l;
    while (p1 < b1 && p2 < b2)
    {
        // if (*(a + p1) < *(b + p2))
        if (left[p1] <= right[p2])
        {
            a[k] = left[p1];
            p1++;
            k++;
        }
        else if (left[p1] > right[p2])
        {
            a[k] = right[p2];
            p2++;
            k++;
        }
    }
    while (p1 < b1)
    {
        a[k] = left[p1];
        p1++;
        k++;
    }
    while (p2 < b2)
    {
        a[k] = right[p2];
        p2++;
        k++;
    }
}

void mergesort(int *a, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        mergetwosortedarrays(a, l, mid, r);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

// wap to take input in an array using recursive function and sum of the elements of the element and print output
#include <stdio.h>
double p2(double *arr, int i, int n)
{
    if (i < n)
    {
        double sum = 0;
        sum = sum + (*arr);
        double rest = p2(arr + 1, i + 1, n);
        return (sum + rest);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    double arr[n];
    for (int i = 0; i < n; i++)
        scanf("%lf", &arr[i]);
    double ss = p2(arr, 0, n);
    double avg = ss / n;
    printf("%lf", avg);
    return 0;
}
// carry some variable so that it kind of stores the sum while calling
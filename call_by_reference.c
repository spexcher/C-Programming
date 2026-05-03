#include <stdio.h>
void fun2(int *u)
{
    *u = *u + 10;
}
int main()
{
    int u = 7;
    fun2(&u);
    printf("%d", u);
    return 0;
}
// call by address/ reference
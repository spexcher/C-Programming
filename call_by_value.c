#include <stdio.h>
void func1(int u)
{
    u = u + 10;
}
int main()
{
    int u = 7;
    func1(u);
    printf("%d", u);
    return 0;
}

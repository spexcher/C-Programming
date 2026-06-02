#include <stdio.h>
#include <stdbool.h>

struct Vegetable
{
    int age;
    int colour;
    // 1-> green
    // 2-> Yellow
    // 3-> Purple
};
int main()
{
    struct Vegetable arrv[10];
    for (int i = 0; i < 10; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        arrv[i].age = a;
        arrv[i].colour = b;
    }

    return 0;
}

#include <stdio.h>

struct employee
{
    int id;
    char name[20];
};

int main()
{
    struct employee e = {101, "John"};

    printf("%d %s", e.id, e.name);

    return 0;
}
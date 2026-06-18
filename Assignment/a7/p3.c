#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int age;
    float marks;
};

void display(struct student s)
{
    printf("%d %s %d %.1f\n",
           s.roll, s.name, s.age, s.marks);
}

int main()
{
    struct student s = {1, "Ram", 18, 80};

    display(s);
    return 0;
}
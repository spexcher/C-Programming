#include <stdio.h>

struct company
{
    char name[20];
    char address[50];
    long phone;
    int emp;
};

int main()
{
    struct company c = {"ABC", "Kolkata", 1234567890, 50};

    printf("%s\n%s\n%ld\n%d",
           c.name, c.address, c.phone, c.emp);

    return 0;
}
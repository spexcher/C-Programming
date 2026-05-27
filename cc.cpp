#include <iostream>
struct Man
{
public:
    int hands = 2;
    int nose = 1;
    int brain = 0;
};
int main(int argc, char const *argv[])
{
    Man *m1 = new Man();
    printf("%d", m1->hands);
    return 0;
}

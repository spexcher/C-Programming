#include <stdio.h>

void rec(int a)
{
    if (a == 0)
    {
        return;
    }
    printf("%d\n", a);
    rec(a - 1);
}
/*
void rec(9){
    printf("%d",9);
    rec(9-1);
}


void rec(8){
    printf("%d",8);
    rec(8-1);
}
void rec(7){
    printf("%d",7);
    rec(7-1);
}
    ....
    void rec(1){
    printf("%d",1);
    rec(1-1);
}
    void rec(0){
    if(a==0)return; // go back from here
    printf("%d",1);
    rec(-1);
}
*/

int main(int argc, char const *argv[])
{
    rec(10);
    return 0;
}

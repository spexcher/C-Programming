#include <stdio.h>

int main()
{
    char b[3][3] = {
        {'X', 'X', 'X'},
        {'O', 'O', 'X'},
        {'O', 'X', 'O'}};

    if (b[0][0] == b[0][1] && b[0][1] == b[0][2])
        printf("Winner: %c", b[0][0]);
    else
        printf("No Winner");

    return 0;
}
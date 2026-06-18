#include <stdio.h>

#define A 10

int main()
{
#ifdef A
    printf("ifdef\n");
#endif

#ifndef B
    printf("ifndef\n");
#endif

#if A > 10
    printf("if\n");
#elif A == 10
    printf("elif\n");
#else
    printf("else\n");
#endif

    return 0;
}
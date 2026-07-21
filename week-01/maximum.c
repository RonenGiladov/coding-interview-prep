#include <stdio.h>
#include "all_functions.h";

int maximum(int a, int b)
{
    return (a >= b ? a : b);
}

int main()
{
    printf("%d", maximum(3,3));
    return 0;
}

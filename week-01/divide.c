#include <stdio.h>

int divide(int numerator, int denominator, int *quotient, int *remainder)
{
    if (denominator == 0)
    {
        printf("invalid denominator\n");
        return -1;
    }
    
    *quotient = numerator/denominator;
    *remainder = numerator % denominator;

    if ((*quotient) * denominator + (*remainder) != numerator)
    {
        return -1;
    }

    return 0;
}

int main()
{

    int quotient = 0, remainder = 0;
    divide(10, 3, &quotient, &remainder);
    printf("quotient: %d, remainder: %d\n", quotient, remainder);
    
    return 0;
}
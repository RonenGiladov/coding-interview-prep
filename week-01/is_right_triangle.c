#include <stdio.h>
#include "all_functions.h"

static float pow_by(float a, float b)
{
    for (int i = 1; i < b; i++)
    {
        a *= a;
    }

    return a;
}

static float best_of_three(float a, float b, float c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }

    return c;
}


static int pythagoras(float a, float b, float c)
{
    float real_c_for_pythagoras = 0;
    float b2 = 0;
    float a2 = 0;
    real_c_for_pythagoras = best_of_three(a, b, c);
    
    if (real_c_for_pythagoras == c)
    {
        a2 = a;
        b2 = b;
    }
    else if (real_c_for_pythagoras == b)
    {
        a2 = a;
        b2 = c;
    }
    else
    {
        a2 = c;
        b2 = b;
    }

    return (pow_by(a2, 2) + pow_by(b2, 2) == pow_by(real_c_for_pythagoras, 2) ? 1 : 0);
}

int is_right_triangle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("invalid parameters for checking if is right triangle");
        return -1;
    }
    
    return pythagoras(a, b, c);
}

int main() 
{
    printf("%d", is_right_triangle(3, 4, 5));
    return 0;
}

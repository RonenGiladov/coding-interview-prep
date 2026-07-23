#include <stdio.h>
#include <math.h>

float square_root(float num)
{
    float estimate = 1;

    while (roundf(estimate*estimate) != num)
    {
        estimate = 0.5 * (estimate+(num/estimate));
    }

    return estimate;
}

int main()
{
    printf("%f, %f", square_root(16), sqrt(2));
    return 0;
}
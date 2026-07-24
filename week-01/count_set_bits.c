#include <stdio.h>

int count_set_bits(unsigned num)
{
    int i = 2;
    int count_bits = 0;

    while (num > 0)
    {
        if (i > num)
        {
            i /= 2;
            num -= i;
            count_bits++;
            i /= 2;
            continue;
        }
        else if (i == num)
        {
           num -= i;
           count_bits++; 
        }

        i *= 2;
    }

    return count_bits;
}


int main()
{

    return 0;
}
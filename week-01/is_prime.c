#include <stdio.h>
typedef unsigned long ulong_t;
int is_prime(ulong_t num)
{
    if (num < 2) return 0;
    
    for (ulong_t i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    for (size_t i = 0; i < 21; i++)
    {
        printf("i:%d %d\n", i, is_prime(i));
    }
    
    return 0;
}


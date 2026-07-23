#include <stdio.h>
#include <stddef.h>

int calculate_avg_v1(const int array[], size_t size) 
{
    float avg, dec_avg;
    int int_avg = 0;
    size_t i = 0;
    avg = 0.0;
    dec_avg = 0.0;

    if (size == 0)
    {
        return 0;
    }

    for (i = 0; i < size; i++)
    {
        avg += array[i];
    }

    avg /= size;
    int_avg = avg;
    dec_avg = avg - int_avg;
    
    if (dec_avg > 0.5)
    {
        avg += dec_avg;
    }
    
    int_avg = avg;

    return int_avg;

}

int calculate_avg_v2(const int array[], size_t size) 
{
    long avg;
    size_t i = 0;
    avg = 0;

    if (size == 0)
    {
        return 0;
    }

    for (i = 0; i < size; i++)
    {
        avg += array[i];
    }

    return (int)((float)((avg / size) + 0.5));
}


int main()
{
    int array[] =  {1, 2, 3, 4, 5, 6};
    
    printf("%d", calculate_avg_v2(array, 6));

    return 0;
}
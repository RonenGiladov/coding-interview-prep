#include <stdio.h>
#include "all_functions.h";

int reverse_number(unsigned int num)
{
    int last_digit, second_digit, sub_number;
    last_digit = 0;
    second_digit = 0;
    sub_number = 0;

    sub_number = (num/10) * 10;
    last_digit = num-sub_number;
    num /= 10;
    sub_number = (num/10) * 10;
    second_digit = num - sub_number;

    return last_digit*100 + second_digit*10 + (num/10);
}

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        printf("%d\n", reverse_number(i));
    }
    return 0;
}


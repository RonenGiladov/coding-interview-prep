#include <stdio.h>
#include "all_functions.h";

float fahrenheit_to_celsius(float fahrenheit)
{
    float celsius = (fahrenheit-32) * 5.0/9;

    return celsius;
}


int main()
{
    printf("%f", fahrenheit_to_celsius(392));

    return 0;
}


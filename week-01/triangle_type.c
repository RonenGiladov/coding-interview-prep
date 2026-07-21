#include <stdio.h>
#include "all_functions.h";

int triangle_type(unsigned int angle1, unsigned int angle2)
{
    unsigned int angle3 = 180 - (angle1 + angle2);
    int type = 0;
    
    if (angle1 == 0 || angle2 == 0 || angle1+angle2 >= 180)
    {
        printf("invalid angle/s for checking triangle type");
        return -1;
    }

    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
    {
        type++;
    }

    if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1)
    {
        type += 2;
    }

    return type;
}


int main()
{
    printf("%d", triangle_type(30, 30));
    return 0;
}
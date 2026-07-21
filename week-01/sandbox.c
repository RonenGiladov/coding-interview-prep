#include <stdio.h>
#include <errno.h>

int main()
{
    double x = 5.0;
    unsigned int y = -5;

    printf("%d", errno);
    //printf("x:%f, y:%u", x, y);
    return 0;
}
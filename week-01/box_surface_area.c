#include <stdio.h>

unsigned int box_surface_area(unsigned int length, unsigned int width, unsigned int height)
{
    unsigned int area = (2*length*width + 2*length*height + 2*width*height);
    
    return area;
}

int main()
{
    printf("%u", box_surface_area(-8, 5, 12));
    
    return 0;
}
#include <stdio.h>


int fib(int n)
{
    int a, b, i, temp;
    a = 0;
    b = 1;
    i = 0;
    temp = 0;
    
    if (n < 0)
    {
        printf("invalid index for fib");
        return -1;
    }

    for (i = 0; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return a;
}

/*
n 5

i   a   b   temp
0   1   1   1
1   1   2   2
2   2   3   3
3   3   5   5
4   5   8   8
5   8   13  13

0 1 2 3 4 5 6
0 1 1 2 3 5 8
*/



int main()
{
    
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        printf("%d, ", fib(i));
    }
     
    return 0;
}
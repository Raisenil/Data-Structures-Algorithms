#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int x = 0;
int fun(int n)
{
    //static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r);

    ///this will still start with x=5
    /*r = fun(5);
    printf("%d\n", r);*/
    return 0;
}
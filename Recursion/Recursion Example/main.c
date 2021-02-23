#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*void fun1(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        fun1(n - 1);
    }
}*/

void fun1(int n)
{
    if (n > 0)
    {
        fun1(n - 1);
        printf("%d", n);
    }
}

int main()
{
    int x = 3;
    fun1(x);
}
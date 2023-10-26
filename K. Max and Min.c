#include<stdio.h>
int main ()
{
    int a, b, c, min, max;
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b & a >= c)
    {
        max= a;
        if (c > b)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }
    if (b >= a && b >= c)
    {
        max = b;
        if (c > a)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    if (c >=a && c>= b)
    {
        max = c;
        if (b > a)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }

    printf("%d %d", min, max);
    return 0;
}

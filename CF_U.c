#include<stdio.h>
int main ()
{
    double n,a;
    int x;
    scanf("%lf",&n);
    x=n;
    a=n-x;
    if(x==n)
    {
        printf("int %d",x);
    }
    else
    {
        printf("float %d %.3lf",x,a);
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    e=a*b*c*d;
    e%=100;
    printf("%02d",e);
    return 0;
}

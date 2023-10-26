#include<stdio.h>
int main ()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/365;
    n%=365;
    b=n/30;
    c=n%30;
    printf("%d years\n%d months\n%d days",a,b,c);
}

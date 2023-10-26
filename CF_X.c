#include<stdio.h>
int main ()
{
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(c>=a && c<=b)
    {
        if(d>=b)
        {
            printf("%lld %lld",c,b);
        }
        else
        {
            printf("%lld %lld",c,d);
        }
    }
    else if(a>=c && a<=d)
    {
        if(b>=d)
        {
            printf("%lld %lld",a,d);
        }
        else
        {
            printf("%lld %lld",a,b);
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}

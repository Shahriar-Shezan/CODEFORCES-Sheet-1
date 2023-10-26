#include<stdio.h>
int main ()
{
    int a,b,c,d;
    char x, y;
    scanf("%d %c%d %c%d",&a,&x,&b,&y,&c);
    if(x==42 && a*b==c)
    {
        printf("Yes");
    }
    else if (x==42 && a*b!=c)
    {
        printf("%d",a*b);
    }
    else if (x==43 && a+b==c)
    {
        printf("Yes");
    }
    else if (x==43 && a+b!=c)
    {
        printf("%d",a+b);
    }
    else if (x==45 && a-b==c)
    {
        printf("Yes");
    }
    else if (x==45 && a-b!=c)
    {
        printf("%d",a-b);
    }
    return 0;

}

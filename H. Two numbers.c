#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b, d, e, f;
    double c;
    scanf("%d%d", &a, &b);
    c = (double) a / b ;
    d = floor(c);
    e = ceil (c);
    f = round (c);
    printf("floor %d / %d = %d\n", a, b, d);
    printf("ceil %d / %d = %d\n",a, b, e);
    printf("round %d / %d = %d\n",a, b, f);
    return 0;
}

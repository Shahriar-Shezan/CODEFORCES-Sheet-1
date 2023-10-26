#include<stdio.h>
int main ()
{
    int a;
    long long int e;
    char d;
    float b;
    double c;
    scanf("%d%lld %c%f%lf", &a, &e, &d, &b, &c);
    printf("%d\n%lld\n%c\n%f\n%lf", a, e, d, b, c);
    return 0;
}

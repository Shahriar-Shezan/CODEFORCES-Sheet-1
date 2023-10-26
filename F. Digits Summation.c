#include <stdio.h>
int main ()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    a = a % 10;
    b = b % 10;
    printf("%lld\n", a + b);
    return 0;
}

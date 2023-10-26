#include<stdio.h>
int main ()
{
    char a;
    scanf("%c", &a);
    if (a >= 48 && a <=59)
    {
        printf("IS DIGIT\n");
    }
    if ( a >= 65 && a <= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    if (a >=97 && a <= 122)
    {
        printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}

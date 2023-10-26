#include<stdio.h>
#include<string.h>
int main ()
{
    char f1[1000],s1[1000];
    char f2[1000],s2[1000];
    scanf("%s",f1);
    scanf("%s",s1);
    scanf("%s",f2);
    scanf("%s",s2);
    int a= strcmp(s1,s2);
    if(a==0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}

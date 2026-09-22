#include<stdio.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    loop:if(n>0)
    {
        digit++;
        n=n/10;
        goto loop;
    }
    printf("%d",digit);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    loop:if(n>0)
    {
        sum=sum*10;
        int a=n%10;
        sum=sum+a;
        n=n/10;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
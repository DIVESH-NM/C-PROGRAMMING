#include<stdio.h>
int main()
{
    int n=6,sum=0;
    loop:if(n>0)
    {
        sum=sum+n;
        n--;
        goto loop;
    }
    printf("%d\n",sum);
    return 0;
}
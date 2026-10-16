#include<stdio.h>
int main()
{
    int n=10,sum=0;
    loop:if(n<100)
    {
        int a=n/10;
        if(n%2==1 && a==7)
        {
        sum=sum+n;
        }
        n++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
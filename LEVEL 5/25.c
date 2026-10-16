#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    loop:if(n>0)
    {
        int a=n%10,count=0;
        if(a>1)
        {
        for(int i=2;i<a;i++)
    {
        
        if(a%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        sum++;
    }
}
    n=n/10;
    goto loop;
    }
    printf("%d",sum);
}
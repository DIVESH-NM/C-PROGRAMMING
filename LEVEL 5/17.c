#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    scanf("%d",&n);
    int temp=n;
    if(n>1)
    {
        for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    for(int j=1;temp>0;j++)
    {
        int a=temp%10;
        sum=sum+a;
        temp=temp/10;
    }
    if(count==0 && sum==14 )
    {
        printf("Prime & sum of digits is 14");
    }
    else if(count==0 && sum!=14)
    {
        printf("Prime & sum of digits is not 14");
    }
    else if(count!=0 && sum==14)
    {
        printf("Not Prime & sum of digits is 14");
    }
    else
    {
        printf("Not Prime & sum of digits is not 14");
    }
    }
    else 
    {
        printf("Invalid input");
    }
}
#include<stdio.h>
int main()
{
    int n,i=2,count=0,sum=0;
    scanf("%d",&n);
    int temp=n;
    if(n>1){
        while(temp>0)
        {
            int a=temp%10;
            sum=sum+a;
            temp=temp/10;
        }
    while(i<n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==0 && sum==14)
    {
        printf("Prime & sum of digit is 14");
    }
    else if(count==0 && sum!=14)
    {
        printf("Prime & sum of digit is not 14");
    }
    else if(count!=0 && sum==14)
    {
        printf("Not Prime & sum of digit is 14");
    }
    else
    {
        printf("Not Prime & sum of digit is not 14");
    }
}
else
{
    printf("Invalid input");
}
}
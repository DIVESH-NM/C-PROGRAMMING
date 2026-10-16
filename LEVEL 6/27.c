#include<stdio.h>
int main()
{
    int i=10,count=0;
    while(i<100000)
    {
    int temp=i,sum=0;
    while(temp>0)
    {
        int a=temp%10;
        sum=sum+a;
        temp=temp/10;

    }
    if(sum==14)
    {
        count++;
    }
    
    i++;
}
   printf("%d",count); 
}
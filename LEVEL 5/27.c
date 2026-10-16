#include<stdio.h>
int main()
{
    int count=0;
    for(int i=10;i<100000;i++)
    {
        int sum=0;
        for(int j=0;i>0;j++)
        {
            int a=i%10;
            sum=sum+a;
            i=i/10;
        }
        if(sum==14)
        {
            count++;
        }
    }
    printf("%d",count);
}
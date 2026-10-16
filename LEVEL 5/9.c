#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=10;i<100;i++)
    {
        int a=i%10;
        if(a==5)
        {
        sum=sum+i;
        }
    }
    printf("%d",sum);
}
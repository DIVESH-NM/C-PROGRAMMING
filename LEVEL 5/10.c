#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=10;i<100;i++)
    {
        int a=i/10;
        if(i%2==1 && a==7)
        {
        sum=sum+i;
        }
    }
    printf("%d",sum);
}
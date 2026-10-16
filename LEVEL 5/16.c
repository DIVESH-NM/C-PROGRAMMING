#include<stdio.h>
int main ()
{
    int n,count=0;
    scanf("%d",&n);
    if(n>1)
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }}
    else
    {
        printf("Invalid input");
    }
}
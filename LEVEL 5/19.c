#include<stdio.h>
int main ()
{
    int n,count=0;
    scanf("%d",&n);
    int z=(n%1000)/10;
    if(z>1)
    {
    for(int i=2;i<z;i++)
    {
        if(z%i==0)
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
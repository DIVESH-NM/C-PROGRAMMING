#include<stdio.h>
int main()
{
    int n,digit=0,i=2;
    scanf("%d",&n);
    if(n>1)
    {
    loop:if(n>i)
    {
        if(n%i==0)
        {
            digit++;
        }
        i++;
        goto loop;
    }
    if(digit==0)
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
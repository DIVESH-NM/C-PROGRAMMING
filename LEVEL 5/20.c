#include<stdio.h>
int main()
{
    int n=2,sum=0;
    loop:if(n<10)
    {
        int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        sum++;
    }
    n++;
    goto loop;
    }
    printf("%d",sum);

}
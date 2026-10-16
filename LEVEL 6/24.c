#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        int a=n%100,i=1;
        while(i<=a && a>9)
        {
            if(i*i==a)
            {
                count++;
                break;
            }
            i++;
        }
        n=n/10;

    }
    printf("%d",count);
    
}
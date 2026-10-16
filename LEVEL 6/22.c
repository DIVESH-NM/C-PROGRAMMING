#include<stdio.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    while(n>9)
    {
        int a=n%100;
        if(a%2==1)
        {
            digit++;
        }
        n=n/10;
    }
    printf("%d",digit);
}
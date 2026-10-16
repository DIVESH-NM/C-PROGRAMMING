#include<stdio.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        digit++;
        n=n/10;
    }
    printf("%d",digit);
}
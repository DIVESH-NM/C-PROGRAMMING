#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        rev=rev*10;
        int a=n%10;
        rev=rev+a;
        n=n/10;
    }
    printf("%d",rev);
}
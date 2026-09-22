#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=(n%100)/10;
    b=n%10;
    printf("%d",a==b);
}
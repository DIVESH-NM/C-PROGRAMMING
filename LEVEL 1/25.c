#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=((n/100)+((n%100)/10)+(n%10));
    n=(n-1)%9+1;
    printf("%d",n);
}
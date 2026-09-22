#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n-(5*((n%10)%2)*((n/100)%2));
    printf("%d",n);
}
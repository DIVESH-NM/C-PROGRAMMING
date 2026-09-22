#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n-(5*(((n/10)+(n%10))%2));
    printf("%d",n);
}
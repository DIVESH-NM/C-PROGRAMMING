#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n-(5*(((n%100)/10)%2));
    printf("%d",n);
}
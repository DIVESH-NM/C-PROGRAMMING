#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=(n%100)+((n/1000)*100)+((n%1000)/100)*1000;
    printf("%d",n);
}
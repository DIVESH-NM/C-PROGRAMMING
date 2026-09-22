#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=((n/100)*100)+((n%10)*10)+((n%100)/10);
    printf("%d",n);
}
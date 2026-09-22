#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=((n%10)*100)+(n/100)+(((n%100)/10)*10);
    printf("%d",n);
    
}
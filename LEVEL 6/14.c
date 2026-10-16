#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        digit++;
        temp=temp/10;
    }
    int a=n%10;
    int b=n/(int)pow(10,digit-1);
    int c=(n%(int)pow(10,digit-1))/10;
    int d=(a*(int)pow(10,digit-1))+(c*10)+b;
    printf("%d",d);
}
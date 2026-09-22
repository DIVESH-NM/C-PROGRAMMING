#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    int temp=n;
    loop:if(temp>0)
    {
        digit++;
        temp=temp/10;
        goto loop;
    }
    int a=n%10;
    int b=n/(pow(10,digit-1));
    int c=(n%(int)(pow(10,digit-1)))/10;
    int d=a*(pow(10,digit-1))+c*10+b;
    printf("%d",d);
    
    return 0;
}
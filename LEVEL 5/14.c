#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    int temp=n;
    int a=n%10;
    for(int i=0;temp>0;i++)
    {
        digit++;
        temp=temp/10;
    }
    int b=n/(int)pow(10,digit-1);
    int c=(n%(int)pow(10,digit-1))/10;
    int d=(a*(int)pow(10,digit-1))+(c*10)+b;
    printf("%d",d);

}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    int a=n%10;
    if(a%2==1)
    {
        int temp=n;
        for(int i=0;temp>0;i++)
        {
            digit++;
            temp=temp/10;
        }
        int b=(n/(int)pow(10,digit-1))-1;
        int c=n%(int)pow(10,digit-1);
        int d=(b*(int)pow(10,digit-1))+c;
        printf("%d",d);
    }
    else
    {
        printf("%d",n);
    }

}
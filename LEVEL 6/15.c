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
        while(temp>0)
        {
            digit++;
            temp=temp/10;
        }
        int b=n/(int)pow(10,digit-1);
        b=b-1;
        int c=(n%(int)pow(10,digit-1));
        int d=b*(int)pow(10,digit-1)+c;
        printf("%d",d);
    }
    else
    {
        printf("%d",n);
    }
}
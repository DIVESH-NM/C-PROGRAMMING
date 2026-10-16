#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    int temp=n;
    int a=n%10;
    if(a%2==1)
    {
        loop:if(temp>0)
        {
            digit++;
            temp=temp/10;
            goto loop;
        }
        int b=(n/(int)pow(10,digit-1))-1;
        int c=(n%(int)pow(10,digit-1));
        n=b*(int)pow(10,digit-1)+c;
        printf("%d",n);
    }
    else
    {
        printf("%d",n);
    }
    
}
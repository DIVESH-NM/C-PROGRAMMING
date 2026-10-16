#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        int a=n%10,i=2,count=0;
        if(a>1){
        while(i<a)
        {
            if(a%i==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count==0)
        {
            sum++;
        }
    }
        n=n/10;
    }
    printf("%d",sum);
    
}
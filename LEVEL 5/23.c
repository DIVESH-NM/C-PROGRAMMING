#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    loop:if(n>0)
    {
    for(int i=3;i>0;i--)
    {
        int a=n%10;
        if((float)a/i==(float)i)
        {
            count++;
            break;
        }
        
    }
    n=n/10;
    goto loop;
}
printf("%d",count);
}
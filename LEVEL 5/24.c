#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    loop:if(n>9)
    {
    for(int i=9;i>0;i--)
    {
        int a=n%100;
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
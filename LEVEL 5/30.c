#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;a>0 && b>0;i++)
    {
        if(a>b)
        {
            int c=a%b;
            int d=b%c;
            if(d==0)
            {
                printf("%d",c);
                break;
            }
        }
        else if(b>a)
        {
            int e=b%a;
            int f=a%e;
            if(f==0)
            {
                printf("%d",e);
                break;
            }
        }
    }
}
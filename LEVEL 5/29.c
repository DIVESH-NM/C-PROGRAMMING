#include<stdio.h>
int main()
{
    int a,b,c,lcm;
    scanf("%d%d%d",&a,&b,&c);
    lcm=(a>b ? a:b);
    if(c>lcm)
    {
        lcm=c;
    }
    for(;;lcm++)
    {
        if(lcm%a==0 && lcm%b==0 && lcm%c==0)
        {
            break;
        }
    }
    printf("%d",lcm);
}
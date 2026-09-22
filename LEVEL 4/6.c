#include<stdio.h>
int main()
{
    int n=10;
    loop:if(n<20)
    {
        if(n%2==1)
        {
        printf("%d\n",n);
        }
        n++;
        goto loop;
    }
    return 0;
}
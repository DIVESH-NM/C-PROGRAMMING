#include<stdio.h>
int main()
{
    int n=10;
    loop:if(n<100)
    {
        int a=(n%10)+(n/10);
        if(n%2==1 && a==7)
        {
        printf("%d\n",n);
        }
        n++;
        goto loop;
    }
    return 0;
}
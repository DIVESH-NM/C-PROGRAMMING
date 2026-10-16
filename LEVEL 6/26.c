#include<stdio.h>
int main()
{
    int i=10000;
    while(i>1000)
    {
        if(i%7==0 && i%9==0)
        {
            printf("%d",i);
            break;
        }
        i--;

    }
}
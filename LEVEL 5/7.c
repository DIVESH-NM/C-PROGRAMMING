#include<stdio.h>
int main()
{
    for(int i=10;i<100;i++)
    {
        int a=i%10;
        int b=i/10;
        if(i%2==1 && a+b==7)
        {
        printf("%d\n",i);
        }
    }
}
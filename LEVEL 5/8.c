#include<stdio.h>
int main()
{
    for(int i=10;i<100;i++)
    {
        int a=i%10;
        int b=i/10;
        if(i%2==0 && a+b==6)
        {
        printf("%d\n",i);
        }
    }
}
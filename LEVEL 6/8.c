#include<stdio.h>
int main()
{
    int i=10;
    while(i<100)
    {
        int a=i%10;
        int b=i/10;
        if(i%2==0 && a+b==6)
        {
        printf("%d\n",i);
        }
        i++;
    }
}
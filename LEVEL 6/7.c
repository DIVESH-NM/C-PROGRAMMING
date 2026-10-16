#include<stdio.h>
int main()
{
    int i=10;
    while(i<100)
    {
        int a=i%10;
        int b=i/10;
        if(i%2==1 && a+b==7)
        {
        printf("%d\n",i);
        }
        i++;
    }
}
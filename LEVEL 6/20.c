#include<stdio.h>
int main()
{
    int n=2,sum=0;
    
    while(n<10)
    {
        int count=0,i=2;
    while(i<n)
    {

        if(n%i==0)
        {
            count++;
            break;
        }
        i++;
    }
    if(count==0)
    {
        sum++;
    }
    n++;
}
printf("%d",sum);

    


}
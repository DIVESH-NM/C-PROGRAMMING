#include<stdio.h>
int main()
{
    int n,i=2,count=0;
    scanf("%d",&n);
    if(n>1){
        n=(n%1000)/10;
    while(i<n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
else
{
    printf("Invalid input");
}
}
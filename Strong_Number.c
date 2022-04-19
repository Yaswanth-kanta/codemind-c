#include<stdio.h>
int main()
{
    int n,d,i,fact=1,num,res=0;
    scanf("%d",&n);
    num=n;
    while(num)
    {
        fact=1;
        d=num%10;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        res+=fact;
        num=num/10;
    }
    if(res==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
         printf("The number %d is not a strong number",n);
    }
}
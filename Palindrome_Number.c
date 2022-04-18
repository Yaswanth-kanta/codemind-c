#include<stdio.h>
int checkpal(int n)
{
    int  temp=0,d,res=0;
    temp=n;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    n=temp;
    if(n==res)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[100],i,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(checkpal(a[i]))
        {
            printf("True");
            printf("
");
        }
        else
        {
            printf("False");
            printf("
");
        }
    }
}
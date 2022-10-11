#include<stdio.h>
int main()
{
    int n,a[100],t,i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            printf("%d",i);
            x=1;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}
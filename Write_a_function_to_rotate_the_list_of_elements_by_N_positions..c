#include<stdio.h>
void rot(int *v,int n)
{
    int k,t=v[n-1];
    for(k=n-1;k>0;k--)
    {
        v[k]=v[k-1];
    }
    v[k]=t;
}
int main()
{
    int n,k,v[2004],i,j;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    scanf("%d",&j);
    for(k=0;k<j;k++)
    {
        rot(v,n);
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",v[k]);
    }
}
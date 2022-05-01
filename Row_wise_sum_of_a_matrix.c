#include<stdio.h>
int main()
{
    int n,m,a[10][10],b[10][10],i,j,sum;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}
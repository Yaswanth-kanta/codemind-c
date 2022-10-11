#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j,k=0,pro;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pro=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                pro=pro*a[j];
            }
        }
        b[k]=pro;
        k++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
}
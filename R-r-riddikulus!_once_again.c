#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    if (r>n && r%n==0)
    {
        for (int i=0;i<n;i++)
            printf("%d",a[i]);
    }
    else
    {
        int j=r;
        for (int i=0;i<n;i++)
        {
            if (j==n)
            {
                j=0;
                printf("%d ",a[j]);
            }
            else
                printf("%d ",a[j]);
            j++;
        }
    }
}
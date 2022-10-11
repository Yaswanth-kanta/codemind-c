#include<stdio.h>
int main()
{
    int n,i,a[100],c=0,b[100],j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c+=1;
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=1;i<=c;i++)
    {
        b[j]=0;
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
}
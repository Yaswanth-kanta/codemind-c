#include<stdio.h>
int main()
{
    int n,a[100],i,min=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    int minind;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            minind=i;
            break;
        }
    }
    max=min;
    for(i=minind;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            
        }
    }
    
        printf("%d",max-min);
    
}
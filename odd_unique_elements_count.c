#include<stdio.h>
int unq(int *arr,int n,int x)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            c++;
        }
    }
    if(c==1)
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
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            if(unq(arr,n,arr[i]))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
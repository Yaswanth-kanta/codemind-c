#include<stdio.h>
int sum(int *arr,int k,int n)
{
    int max=-1;
    for (int i=k+1;i<n;i++)
    {
        if (arr[i]>max)
            max=arr[i];
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (int i=0;i<n;i++)
    {
        printf("%d ",sum(arr,i,n));
    }
}
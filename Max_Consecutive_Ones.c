#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0,d=0;
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (int i=0;i<n;i++)
    {
        if (arr[i]==1)
        {
            c+=1;
            if (c>d)
                d=c;
        }
        else
            c=0;
    }
    if (c>d)
        printf("%d",c);
    else
        printf("%d",d);
}
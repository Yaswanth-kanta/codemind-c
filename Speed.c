#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0;k<t;k++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int c=0;
        for (int i=1;i<n;i++)
        {
            if (a[i-1]>a[i])
                c+=1;
        }
        printf("%d
",c+1);
    }
}
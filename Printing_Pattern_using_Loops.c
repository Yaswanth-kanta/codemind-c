#include<stdio.h>
int main()
{
    int n,l,i,j,m;
    scanf("%d",&n);
    l=2*n-1;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            m=(i>j)?j:i;
            m=(m>l-i-1)?l-i-1:m;
            m=(m>l-j-1)?l-j-1:m;
            printf("%d ",n-m);
        }
        printf("
");
    }
    return 0;
}
#include<stdio.h>
void exc(int n)
{
    int ans[2004],i=0,a;
    while(n)
    {
        ans[i]=char(65+(n-1)%26);
        i++;
        n=(n-1)/26;
    }
    for(a=i-1;a>=0;a--)
    {
        printf("%c",ans[a]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    exc(n);
}
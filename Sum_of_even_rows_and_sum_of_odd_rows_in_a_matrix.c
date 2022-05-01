#include<stdio.h>
int main()
{
    int r,c,a[10][10],es=0,os=0,i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2==0)
            {
                es+=a[i][j];
            }
            else
            {
                os+=a[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}
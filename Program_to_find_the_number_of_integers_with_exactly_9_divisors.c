#include<stdio.h>
int main()
{
    int n,i,fc=0,j,x=0;
    scanf("%d",&n);//100
    for(i=1;i<=n;i++)//1
    {
    	fc=0;
        for(j=1;j<=i;j++)//1
        {
            if(i%j==0)
            {
                fc++;
            }
        }
        if(fc==9)
        {
            printf("%d ",i);
            x++;
        }
        
    }
    printf("
Total=%d",x);
}
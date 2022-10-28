#include<stdio.h>
int main()
{
    int r,v[2004],k,a=-1,b=-1,f;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    scanf("%d",&f);
    for(k=0;k<r;k++)
    {
        if(f==v[k])
        {
            a=k;
            break;
        }
    }
     for(k=r-1;k>=0;k--)
    {
        if(f==v[k])
        {
            b=k;
            break;
        }
    }
    printf("%d %d",a,b);
}
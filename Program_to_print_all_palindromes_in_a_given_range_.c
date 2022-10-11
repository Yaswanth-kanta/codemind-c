#include<stdio.h>
int isitpal(int num)
{
    int d,res=0,temp;
    temp=num;
    while(num)
    {
        d=num%10;
        res=res*10+d;
        num=num/10;
    }
    if(temp==res )
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
    int i,n1,n2;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<n2;i++)
    {
        if(isitpal(i))
        {
            printf("%d ",i);
        }
    }
    
}
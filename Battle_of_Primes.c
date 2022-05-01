#include<stdio.h>
int isprime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
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
    int n1,n2,i,tot;
    scanf("%d%d",&n1,&n2);
    for(i=1;;i++)
    {
        tot=n1+n2+i;
        if(isprime(tot))
        {
            printf("%d",i);
            break;
        }
    }
}
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
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n1+1;i<n2;i++)
    {
        if(isprime(i))
        {
            printf("%d
",i);
        }
    }
}
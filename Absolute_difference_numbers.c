#include<stdio.h>
#include<math.h>
int main()
{
    long int i,n,k,a,c=0,x=0,d1=0,ld=0,temp=0,temp1=0,diff=0,diff1=0;
    scanf("%ld%ld",&a,&n);
    temp=a;
    temp1=a;
    while(temp1>0)
    {
        d1=temp1%10;
        c++;
        temp1=temp1/10;
    }
    if(c>=2*n)
    {
        i=pow(10,(c-n));
        x=a/i;
        k=pow(10,n);
        ld=temp%k;
    }
    
    diff=abs(x-ld);
    printf("%ld",diff);
}
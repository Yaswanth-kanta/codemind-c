#include<stdio.h>
int main()
{
    int a,b,c,cap,byte=1024,res;
    scanf("%d%d%d",&a,&b,&c);
    cap=2*a*b*c*512;
    res=cap/byte;
    printf("%d",res);
    printf("KB");
    
}
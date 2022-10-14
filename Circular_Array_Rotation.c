#include<stdio.h>
int main()
{

    int N,rot,n,vk[2004],i,t,r,l;
    scanf("%d %d %d",&N,&rot,&n);
    for(i=0;i<N;i++)
    {
        scanf("%d",&vk[i]);
    }
    for(i=0;i<rot;i++)
    {
        t=vk[N-1];
        for(r=N-1;r>0;r--)
        {
            vk[r]=vk[r-1];
        }
        vk[0]=t;
    }
    for(r=0;r<n;r++)
    {
        scanf("%d",&l);
        printf("%d
",vk[l]);
    }
}
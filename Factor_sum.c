#include<stdio.h>
int fun(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    return s;
}
int pres(int *k,int r,int i)
{
    int v;
    for(v=0;v<i;v++)
    {
        if(k[v]==r)
        {
            return 1;
        }
    }
    return 0;
}
void sort(int *v,int r)
{
    int i,j,t;
    for(i=0;i<r-1;i++)
    {
    	for(j=0;j<r-1;j++)
    	{
        	if(v[j]>v[j+1])
        	{
            	t=v[j+1];
            	v[j+1]=v[j];
            	v[j]=t;
        	}
    	}
    }
}
int main()
{
    int v[2004],k=0,a=0,b[2004],i=0;
    char str[200];
    fgets(str,sizeof(str),stdin);
    while(str[k])
    {
        if(k%2==0)
        {
            v[a]=int(str[k])-48;
            a++;
        }
        k++;
    }
    for(k=0;k<a;k++)
    {
        if(pres(v,fun(v[k]),a))
        {
            b[i]=v[k];
            i++;
        }
    }
    sort(b,i);
    if(i==0)
    {
        printf("-1");
    }
    else
    {
        for(a=0;a<i;a++)
        {
            printf("%d ",b[a]);
        }
    }
}
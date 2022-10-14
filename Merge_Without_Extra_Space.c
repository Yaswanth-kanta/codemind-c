#include<stdio.h>
void sort(int *v,int n)
{
    int k,r[2004],j,t;
    for(k=0;k<n;k++)
    {
        r[k]=v[k];
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(v[k]>v[k+1])
        	{
            	t=v[k+1];
            	v[k+1]=v[k];
            	v[k]=t;
        	}
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,v[2004],k;
        scanf("%d %d",&a,&b);
        int A=a;
        for(k=0;k<a;k++){
            scanf("%d",&v[k]);
        }
        for(k=0;k<b;k++){
            scanf("%d",&v[a++]);
        }
        sort(v,A+b);
        for(k=0;k<A+b;k++){
            printf("%d",v[k]);
            if(k==A+b-1)
            {
                break;
            }
            printf(" ");
        }
        printf("
");
    }
}
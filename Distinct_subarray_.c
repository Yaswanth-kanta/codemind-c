int countoddsum(int *arr,int n)
{
    int i,val,j,res=0;
    for(i=0;i<n;i++)
    {
        val=0;
        for(j=i;j<n;j++)
        {
            val+=arr[j];
            if(val%2!=0)
            {
                res+=1;
            }
        }
    }
    return res;
}
#include<stdio.h>
int main()
{
    int a,b,arr[2004],i,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        arr[c]=i;
        c++;
    }
    printf("%d",countoddsum(arr,c));
}
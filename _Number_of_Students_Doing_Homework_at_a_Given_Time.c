#include<stdio.h>
int main()
{
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for (int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    for (int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    int s,c=0;
    scanf("%d",&s);
    for (int i=0;i<n1;i++)
    {
        if (s>=arr1[i] && s<=arr2[i])
            c=c+1;
    }
    printf("%d",c);
}
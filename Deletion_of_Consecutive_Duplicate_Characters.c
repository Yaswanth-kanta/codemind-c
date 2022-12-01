#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0;k<t;k++)
    {
        char a[30];
        scanf("%s",a);
        char b=a[0];
        int c=0;
        for (int i=1;i<=strlen(a);i++)
        {
            if (a[i]==b)
                c+=1;
            b=a[i];
        }
        printf("%d
",c);
    }
}
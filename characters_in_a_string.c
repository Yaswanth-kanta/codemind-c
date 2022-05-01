#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l,i,c=0;
    scanf("%[^
]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>=65 || str[i]<=90) || (str[i]<=97 || str[i>=122]))
        {
            c++;
        }
    }
    printf("%d",c);
}
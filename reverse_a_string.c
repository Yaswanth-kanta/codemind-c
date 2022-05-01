#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char str[100];
    scanf("%[^
]",&str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
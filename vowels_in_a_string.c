#include<stdio.h>
int main()
{
    int i;
    char str[100],c,cc=0;
    scanf("%[^
]s",str);
    scanf(" %c",&c);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==c)
        {
            cc++;
            break;
        }
        
    }
    if(cc==0)
    {
        printf("False");
    }
    else
    {
        printf("True
");
        printf("%d",i);
    }
}
# include <stdio.h>
int main()
{
    int prno,i,n,flag;
	scanf("%d",&prno);
    for(i=1;i<=prno;i++)
        {
            if(i*(i+1)==prno) 
            {
                flag=1;
                break;
            }
        }
  
            if(flag==1)
            {
		    	printf("YES");
            }
            else
            {
		    	printf("NO");
            }
}
#include<stdio.h>
int main(){
    int n,x,c=0,d=0,i;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a<=x){
            c++;
        }
        else if(d==1){
            break;
        }
        else{
            d++;
        }
    }
    printf("%d",c);
}
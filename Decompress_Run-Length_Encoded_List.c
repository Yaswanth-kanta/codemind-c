#include<stdio.h>
int main(){
    int n,v[2004];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<v[i];j++){
            printf("%d ",v[i+1]);
        }
    }
}
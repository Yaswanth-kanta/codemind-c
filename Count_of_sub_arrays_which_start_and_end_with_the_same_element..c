#include<stdio.h>
int main(){
    int n,s=0,vk[2004],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&vk[i]);
    }
    for(int r=0;r<n;r++){
        for(int l=r+1;l<=n;l++){
            if(vk[r]==vk[l-1]){
                s++;
            }
        }
    }
    printf("%d",s);
}
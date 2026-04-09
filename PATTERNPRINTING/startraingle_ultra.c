#include<stdio.h>
int main(){
    int n;
        printf("ENTER NO. OF ROW :");
        scanf("%d",&n);
        for(int i=1;i<=n;i=i+1){
            for(int j=1;j<=5-i;j=j+1){
                printf(" *");
            }
            printf(" \n");
        }
    
    return 0;
}
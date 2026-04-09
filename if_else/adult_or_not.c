#include<stdio.h>
int main(){
    int n;
    printf("ENTER COST PRICE");
    scanf("%d",&n);
    int m;
    printf("ENTER SELLINGH PRICE");
    scanf("%d",&m);
    if(n>m){
        printf("loss");
    }
    else{
        printf("profite");
    }
    return 0;
}
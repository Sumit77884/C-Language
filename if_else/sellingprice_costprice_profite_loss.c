#include<stdio.h>
int main(){
    int n;
    printf("ENTER COST PRICE :");
    scanf("%d",&n);
    int m;
    printf("ENTER SELLING PRICE :");
    scanf("%d",&m);
    if(n<m){
        printf("Profite");
    }
    else{
        printf("LOSS");
    }
    if(n==m){
        printf("NO PROFITE NO LOSS");
    }
    return 0;

}
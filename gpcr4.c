#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    int a = 3;
    for(int i=3;i<=n;i=i+1){
        printf(" %d",a);
        a = a*4;
    }
    return 0;
}
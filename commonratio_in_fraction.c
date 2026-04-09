#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER :");
    scanf("%d",&n);
    float a=100;
    for(float i=1; i<=n;i=i+1){
        printf(" %d",a);
        a=a*1/2;
    }
    return 0;
}
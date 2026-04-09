#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    if(n%6==0){
        printf("NUMBER IS DIVISIBLE BY 6");
    }
    else{
        printf("NUMBER IS NOT DIVISIBLE BY 6");
    }
    return 0;
}
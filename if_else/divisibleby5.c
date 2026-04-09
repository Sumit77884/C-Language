#include<stdio.h>
int main(){
    int n;
    printf("Enter a NUMBER:");
    scanf("%d",&n);
    if(n%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("NOT Divisible by 5");
    }
    return 0;
}
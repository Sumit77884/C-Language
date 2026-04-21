#include<stdio.h>
int main(){
    int n;
    printf("ENTER YOUR NUMBER");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        printf("NUMBER IS DIVISIBLE BY 3&5 :");
    }
    else{
        printf("NUMBER IS NOT DIVISIBLE BY 5&3 :");
    }
    return 0;
}
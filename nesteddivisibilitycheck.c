#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("THE NUMBER IS DIVISIBLE BY 5 AND 3 :");
        }
    
        else{
            printf("THE NUMBER IS NOT DIVISIBLE BY 5 AND 3");
        }
    }
        else{
            printf("THE NUMBER IS NOT DIVISIBLE BY 5 AND 3");
        }
        return 0;
    
}
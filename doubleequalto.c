#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER 1st NUMBER :");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER :");
    scanf("%d",&b);
    printf("ENTER 3RD NUMBER :");
    scanf("%d",&c);
    if(a>b){ // b is out of race
        if(a>c)
        printf("%d is greatest",a);
        else // a<c
            printf("%d is greatest",c);
        
    
    }
    else{ // b>a
        if(b>c)
        printf("%d is greatest",b);
        else // c>b
        printf("%d is greatest",c);
    }
return 0;
}
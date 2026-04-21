#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("ENTER 1ST NUMBER :");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER :");
    scanf("%d",&b);
    printf("ENTER 3RD NUMBER :");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("%d is greater",a);
    }
    if(b>a && b>c){
        printf("%d is greater",b);
    }
    if(c>a && a>c){
        printf("%d is greater",a);
    }
    return 0;

}
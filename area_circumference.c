#include<stdio.h>
int main(){
    int l;
    printf("ENTER LENGTH : ");
    scanf("%d",&l);
    int b;
    printf("ENTER BREADTH : ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2 * (l+b);
    if(a>p){
        printf("Area is not greater than perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
    return 0;
}
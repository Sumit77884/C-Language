#include<stdio.h>
int main(){
    int r;
    printf("ENTER YOUR RADIUS :");
    scanf("%d",&r);
    int a = 3.14 * r *r;
    int c = 3.14 * 2 * r;
    if(a>c){
        printf("AREA IS GREATER THAN PERIMETER");
    }
    else{
        printf("AREA IS NOT GREATER THAN PERIMENT");
    }

    return 0;
}
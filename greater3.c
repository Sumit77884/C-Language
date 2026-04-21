#include<stdio.h>
int main (){
    float a,b,c;
    
    printf("ENTER NUMBER 1(a):");
    scanf("%f",&a);
    printf("ENTER NUMBER 2(b):");
    scanf("%f",&b);
    printf("ENTER NUMBER 3(c):");
    scanf("%f",&c);
    if(a>b&&a>c){
        printf("GREATEST OF a,b AND c IS a: %f",a);
    }
    else if(b>c){
        printf("GREATEST OF a,b AND c IS b: %f",b);
    }
    else
    {
    printf("GREATEST OF a,b AND c IS c: %f",c);
    }
    return 0;
    
}
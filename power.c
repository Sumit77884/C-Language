#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER BASE :");
    scanf("%d",&a);
    printf("ENTER POWER :");
    scanf("%d",&b);
    int power = 1;
    for(int i=1;i<=b;i=i+1){
        power = power * a;
    }
    printf("%d raised to the power %d is %d",a,b,power);
    return 0;
}
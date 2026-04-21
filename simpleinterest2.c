#include<stdio.h>
int main(){
    float principal,rate,time,si; // 4 dabbe create ho jaate
    printf("ENTER PRINCIPAL : ");
    scanf("%f",&principal);
    printf("ENTER RATE : ");
    scanf("%f",&rate);
   printf("Enter Time : ");
   scanf("%f",&time);
   si = (principal*rate*time)\100;
   printf("Your simple Interest is : %f",si);
   return 0;
}
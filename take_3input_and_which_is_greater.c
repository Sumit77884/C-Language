#include<stdio.h>
int main(){
 int a;
 int b;
 int c;
 int d;
 printf("ENTER 1ST NUMBER :");
 scanf("%d",&a);
 printf("ENTER 2ND NUMBER :");
 scanf("%d",&b);
 printf("ENTER 3RD NUMBER :");
 scanf("%d",&c);
 printf("ENTER 4TH NUMBER :");
 scanf("%d",&d);
 if(a>b && a>c && a>d){
    printf("%d is greater",a);
 }
 if(b>a && b>c && b>d){
    printf("%d is greater",b);
 }
 if(c>a && c>b && c>d){
    printf("%d is greater",c);
 }
 if(d>a && d>b && d>c){
    printf("%d is greater",d);
 }
 return 0;

}
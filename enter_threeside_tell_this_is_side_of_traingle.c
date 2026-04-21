#include<stdio.h>
int main(){
    int a;
    printf("ENTER 1ST NUMBER :");
    scanf("%d", &a);

int b;
printf("ENTER 2ND NUMBER :");
scanf("%d", &b);
int c;
printf("ENTER YOUR 3RD NUMBER :");
scanf("%d", &c);
if((a+b)>c && (b+c)>a && (a+c)>b){
    printf("valid traingle");
}
else{
    printf("invalid traingle");
}
return 0;
}
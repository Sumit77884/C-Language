#include<stdio.h>
int main(){
    int a[5]={2,4,6,8,1};
    a[4]=100;
    printf("%d",a[4]);//Array can be updated
    float arr[3]={1.2,3.4,5.7};
    printf(" ,%f",arr[2]);//float array
char arra[4]={'a','b','c','%'};
printf(" ,%c",arra[3]);
    return 0;
}
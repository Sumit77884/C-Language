#include<stdio.h>
int main(){
    int a;
    printf("ENTER AGE OF RAM : ");
    scanf("%d", &a);
    int b;
    printf("ENTER AGE OF SHYAM :");
    scanf("%d", &b);
    int c;
    printf("ENTER AGE OF AJAY :");
    scanf("%d", &c);
    int d;
    printf("ENTER AGE OF SUMIT :");
    scanf("%d", &d);
    if(a<b && a<c && a<d){
        printf("RAM IS YOUNGEST :");
    }
    if(b<a && b<c && b<d){
printf("SHYAM IS YOUNGEST :");
    }
    if(c<a && c<b && c<d ){
        printf("AJAY IS YOUNGEST :");
    }
    if(d<a && d<b && d<c){
        printf("SUMIT IS YOUNGEST :");
    }
    return 0;
}
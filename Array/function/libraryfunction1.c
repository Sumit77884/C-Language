/*
LIBRARY FUNCTIONS:-
1.stdio.h
a.printf
b.scanf
2.math.h
a.sqrt()
b.pow(a,b)
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int root = sqrt(a);
    int q=pow(a,2);
    printf("square of %d :%d\n",a,q);
    printf("square root %d:%d",a,root);
    return 0;
}
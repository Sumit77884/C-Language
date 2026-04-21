/*
Rules for Switch Statement
1.Switch expression:- int or char
2.Case:- Value must be an integer or a chatrecter.
3.Case must come inside switch.
4.break is not a muust.
int x;
switch(){
    case and code
}
*/
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    switch (x)
    {
        case (x<10):
        printf("%d is one digit number",x);
        break;
    case (x<100):
        printf("%d is two digit number",x);
        break;
        case (x<1000):
        printf("%d is three digit number",x);
        break;
    case (x<10000):
        printf("%d is four digit number",x);
        break;
        case (x<100000):
        printf("%d is five digit number",x);
        break;
        case (x<1000000):
        printf("%d is six digit number",x);
        break;
        
    default:
    printf("%d is greater than six digit",x);
        break;
    }
    return 0;

}
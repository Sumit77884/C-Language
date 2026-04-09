/*
When we call a function by value,it means that
we are passing the values of the arguments which
copied into the formal parameter of the function.
*/
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main (){
    int x=2,y=3;
    int=add(x,y);
    return 0;
}
// to check whether a number is prime or not ?
#include<stdio.h>
int main(){
    int num,i,a;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    for(i=2;i<num-1;i=i+1)
    {
a=num%i;

    }
    if(a!=0)
printf("NUMBER %d IS PRIME NUMBER.",num);
    
    
    else 
    printf("NUMBER %d IS COMPOSITE.",num);
    return 0;

}

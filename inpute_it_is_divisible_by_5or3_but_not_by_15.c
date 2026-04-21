#include<stdio.h>
int main(){
 int n;
 printf("ENTER A NUMBER:");
 scanf("%d",&n);
 if((n%5==0 || n%3==0) && n%15!=0){
    printf("THE NUMBER IS DIVISIBLE BY 5 or 3 but not 15 :");
    
 }
 else{
    printf("THE NUMBER IS NOT DIVISIBLE BY 3 OR 5");
 } 

 return 0;   
}
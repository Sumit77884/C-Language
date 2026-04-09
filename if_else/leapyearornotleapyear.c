#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER year :");
    scanf("%d",&n);
    if(n%4==0){
    printf("THIS YEAR IS LEAP YEAR");
    }
else{
    printf("THIS YEAR IS NOT LEAP YEAR");
}
return 0;
}
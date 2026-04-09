#include<stdio.h>
int main(){
    int i,sum=0;
    printf("NUMBERS BETWEEN 1 AND 300 AND DIVISIBLE BY 7:-\n");
    for(i=1;i<=300;i=i+2)
    
    {
if(i%7==0)
    {
    printf("%d, ",i);
    
    sum+=i;
    }
    
}
printf("\nSUM OF ALL THE ABOVE NUMBERS=%d",sum);
return 0;
}
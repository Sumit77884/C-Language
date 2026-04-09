#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF TERM :");
    scanf("%d",&n);
    //1 -2 +3-4+5-6+-------n terms
    // odd number -> add
    // even number -> subtract
    int sum =0;
    if(n%2==0){
        sum =-n/2;

    }
    else{
        sum = -n/2 + n;
    }
    printf("THE SUM IS : %d",sum);
    return 0;
}
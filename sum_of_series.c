#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER OF TERM :");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum +i;
    }
    printf("THE SUM IS : %d",sum);
    return 0;
}
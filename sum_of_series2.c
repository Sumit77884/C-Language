#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF TERM :");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i=i+1){
        if(i%2!=0)sum = sum +i;
        else sum = sum -i;
    }
    printf("THE SUM IS : %d",sum);
    return 0;
}
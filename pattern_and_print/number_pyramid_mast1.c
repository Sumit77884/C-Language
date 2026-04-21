#include<stdio.h>
int main(){
    int n;
    printf("WRITE YOUR NUMBER : ");
    scanf("%d",&n);
    //1234567
    //123 567
    //12   67
    //1     7
    // n= 4
    int nst = n;
    int nsp = 1;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",i);
    
        for(int j=1;j<=2*n-1;j++){
           printf("%d",j); 
        }
        printf("\n");
    }
return 0;
}
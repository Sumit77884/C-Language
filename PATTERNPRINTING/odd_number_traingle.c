#include<stdio.h>
int main(){
    int n;
    printf("WRITE NUMBER OF ROW :");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=i;j=j+1){
             a = a + 2;
            printf("%d", a);
           
        }
        printf(" \n");
    }
    return 0;
}
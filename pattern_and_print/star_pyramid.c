#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF ROW :");
    scanf("%d",&n);
    int nst = 1;
    int nsp = 3;
    for(int i=1;i<=n;i=i+1){
for(int k=1;k<=nsp;k=k+1){
    printf(" ");
}
nsp = nsp - 1;
for(int j=1;j<=nst;j=j+1){
    printf("*");
}
printf("\n");
    }
    return 0;
}
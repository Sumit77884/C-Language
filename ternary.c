#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    n%2==0 ? printf("EVEN NUMBER") : printf("odd number");
    return 0;
}
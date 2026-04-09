#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    int product = 1;
    for (int i=1;i<=n;i=i+1){
        product = product*i;
        printf("THE FACT0RIAL OF %d is : %d\n",i,product);
    }
    return 0;
}
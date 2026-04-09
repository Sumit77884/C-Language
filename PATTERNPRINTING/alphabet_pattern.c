#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF ROWS :");
    scanf("%d",&n);
    //A B C D
    //A B C D
    //A B C D
    //A B C D
    for(int i=1;i<=n;i=i+1){
int a = 1;
    for(int j=1;j<=n;j=j+1){
        int d=a +64;
        char ch = (char)d;
        printf("%c ",ch);
        a++;

    }
    printf(" \n");

    }
    return 0;
}
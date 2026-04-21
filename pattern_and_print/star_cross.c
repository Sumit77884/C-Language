#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF ROW");
    scanf("%d",&n);
    for(int i = 1;i<=n; i=i+1 )
    {
        for(int j=1;j<=n;j=j+1)
        {
            int a=i+j;
            if(a==n+1||i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf(" \n");
    }
    return 0;
}
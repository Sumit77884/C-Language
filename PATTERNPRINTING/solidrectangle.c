#include<stdio.h>
int main(){
    int n;
    printf("ENTER A ROW :");
    scanf("%d",&n);
    int m;
    printf("ENTER NO. OF COLOUM:");
    scanf("%d",&m);

    for(int i=1;i<=n;i=i+1){
    for(int i=1;i<=m;i=i+1){
    printf("* "); //outer loop -> no. of line
    }
    printf("\n");//inner loop -> no. of star in each line
    }
    return 0;
}
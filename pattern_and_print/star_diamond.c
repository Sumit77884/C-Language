#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF LINES : ");
    scanf("%d",&n);
    int nsp = n/2;
    int nst = 1;
    int ml = n/2 + 1;
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=nsp;j++){ // spaces
printf(" ");
        }

        for(int k=1;k<=nst;k++){ //star
            printf("*");
        
        }
        if(i<ml){
            nsp--;
            nst+=2;

        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
        //a+=5; // a = a+5;
        //a-=4; // a=a-4;
        
    }
    return 0;
}

#include<stdio.h>
int main(){
    int nst,nsp, n;
    
printf("ENTER NUMBER OF ROWS :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
int a=1;
for(int j=1;j<=nst;j++) {   //stars
printf("%d",a);
a++;
}
for (int k=1;k<=nsp;k++){  // space
printf(" ");
a++;
}
for(int j=1;j<=nst;j++){
    printf("%d",a);
    a++;
}
nst--;
nsp+=2;
printf("\n");
}
return 0;
}
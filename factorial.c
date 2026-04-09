#include<stdio.h>
int main(){
int n;
printf("ENTER A NUMBER");
scanf("%d",&n);
//5! = 1x2x3x4x5
int product =1;
for (int i=1;i<=n;i=i+1){
    product = product*i;
}
printf("THE FACTORIAL IS : %d",product);
return 0;
}

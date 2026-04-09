#include<stdio.h>


   int main(){
    int a , r ,n;
    printf("enter the first term =");
    scanf("%d",&a);

    printf("enter the cd =");
    scanf("%d",&r);

    printf("enter no. of terms = ");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++)
    {
      
      printf(" %d",a);
      a=a*r;
    }
     

   
   return 0;
}
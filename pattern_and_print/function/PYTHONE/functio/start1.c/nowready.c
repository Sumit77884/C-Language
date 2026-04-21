#include<stdio.h>
int main(){
    int number1,number2,sum,subtraction,multiplication,modulus,division;
    printf("ENTER NUMBER1 : ");
    scanf("%d",&number1);
    printf("ENTER NUMBER2 : ");
    scanf("%d",&number2);
    sum=number1 +number2;
    subtraction= number1-number2;
    multiplication= number1*number2;
    modulus= number1%number2;
    division = number1 / number2 ;
    printf("SUM OF %d + %d=%d\n",number1,number2,sum);
    printf("SUBTRACTION OF %d - %d = %d\n",number1,number2,subtraction);
    printf("MULTIPLICATION OF %d * %d = %d\n",number1,number2,multiplication);
    printf("REMAINDER WHEN %d / %d = %d\n",number1,number2,modulus);
    printf("QUOTIENT WNEN %d / %d = %d\n",number1,number2,division);
    return 0;
}

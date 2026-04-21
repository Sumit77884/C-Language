#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,root1,root2,root3,d;
    printf("COFFICIENT OF X^2(a):");
    scanf("%f",&a);
    printf("COFFICIENT OF X(b):");
    scanf("%f",&b);
    printf("COFFICIENT OF CONSTANT TERM(c):");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
printf("ROOT1=%f \nROOT2=%f",root1,root2);
    }
    else if(d==0)
    {
        root3=-b/(2*a);
        printf("BOTH ROOTS ARE EQUAL =%f",root3);
    }
    else{
        printf("NO REAL ROOTS EXISTS");
    }
    return 0;
}
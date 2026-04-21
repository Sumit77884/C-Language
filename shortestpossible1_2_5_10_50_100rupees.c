#include<stdio.h>
int main(){
    int amount,r1,r2,r5,r10,r50,r100,totalnotes;
    printf("ENETR AMOUNT:");
    scanf("%d",&amount);
    r100=amount/100;
    amount=amount%100;
    r50=amount/50;
    amount=amount%50;
    r10=amount/10;
    amount=amount%10;
    r5=amount/5;
    amount=amount%5;
    r2=amount/2;
    amount=amount%2;
    r1=amount;
    printf("NO. OF NOTES OF 100:%d\n NO. OF NOTES OF 50:%d\n NO. OF NOTES OF 10:%d\n NO. OF NOTES OF 5:%d\n NO. OF NOTES OF 2:%d\n NO. OF NOTES OF 1:%d",r100,r50,r10,r5,r2,r1);
    totalnotes=r100+r10+r50+r5+r2+r1;
    printf("\nTOTAL NUMBER OF NOTES:%d",totalnotes);
    return 0;
}
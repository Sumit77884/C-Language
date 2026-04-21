#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("WRITE CO-ORDINATE OF 1ST POINT:");
    scanf("%d%d",&x1,&y1);
    printf("WRITE CO-ORDINATE OF 2ND POINT:");
    scanf("%d%d",&x2,&y2);
    printf("WRITE CO-ORDINATE OF 3RD POINT :");
    scanf("%d%d",&x3,&y3);
    double m1 = (y2-y1)/(x2-x1) ;
    double m2 = (y3-y2)/(x3-x2) ;
    if(m1==m2){
        printf("STRAIGHT LINE WILL FORM");
    }
    else{
        printf("STRAIGHT LINE CAN NOT BE FORM");
    }
    return 0;

}
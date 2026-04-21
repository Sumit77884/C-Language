#include<stdio.h>
int main(){
    int x,y;
    printf("ENTER THE CO-ORDINATE OF A PONINT :");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("THE POINT IS ORIGIN");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if (y==0)
    {
        printf("lies on x-axis");
    }
    else{
        printf("THE POINT IS NOT ON X-AXIS NOT Y AXIS AND NOT ORIGIN :");
    }
    return 0;
}
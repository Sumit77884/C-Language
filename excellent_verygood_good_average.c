#include<stdio.h>
int main(){
    int n;
    printf("ENTER MARKS");
    scanf("%d",&n);
    if(n>90){
        printf("EXCELLENT");
    }
    else if(n>80){
        printf("VERY GOOD");
    }
    else if(n>70){
        printf("GOOD");
    }
    else if(n>60){
        printf("CAN DO BETTER");
    }
    else if(n>50){
        printf("AVERAGE");
    }
    else if(n>40){
        printf("BELOW AVERAGE");
    }
    else if(n<40){
        printf("FAIL");
    }
    return 0;
}

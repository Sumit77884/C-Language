#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *y=temp;
    return;
}
int main(){
    int a,b;
    printf("ENTER VALUE OF a:");
    scanf("%d",&a);
    printf("ENTER VALUE OF b:");
    scanf("%d",&b);
    printf("Value of a and b before swap:%d and %d\n",a,b);
    swap(&a,&b);
    printf("Value of a and b after swap:%d and %d\n",a,b);
    return 0;
}
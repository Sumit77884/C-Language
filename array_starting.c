//ARRAY THROUGH INPUT
#include<stdio.h>
int main(){
    int arr[4],i;
    
    for(i=0;i<=3;i++){
        printf("ENTER ELEMENT OF ARRAY%d:\n",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<=3;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
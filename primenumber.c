#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
    break;
        }

    }
    if(a==0) printf("THE GIVEN NUMBER IS PRIME:\n");
    else printf("THE GIVEN NUMBER IS COMPOSITE:\n");
    return 0;
} 
  #include<stdio.h>
  int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 0;
    for(int i=1;i<=n-2;i=i+1){
        sum = a + b;
        a = b;
        b = sum;
        
    }
    printf("THE %dth FIBONACCI OF IS %d",n,sum);
    return 0;
  }
#include<stdio.h>
int main(){
    int i, a[50],size,pos;
    printf("Ener Size of array:");
    scanf("%d",&size);
    printf("Enter elements in array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("From which position you want to delete:");
    scanf("%d",&pos);
    if(pos<=0|| pos>size)
    {
        printf("invalid position");
    }
    else
for(i=pos-1;i<size-1;i++){
a[i]=a[i+1];
}
size--;
for(i=0;i<size-1;i++)
printf("%d",a[i]);

return 0;
}
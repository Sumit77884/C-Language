//PROGRAM TO SUN OF EVEN AND ODD OF 2D ARRAY.
#include<stdio.h>
int main(){
    int i=0,j=0;
    int
    arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    int even=0;int odd=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            for(j=0;j<4;j++)
            {
            if(arr[i][j]%2==0)
            {
                even=even+arr[i][j];
            }
            else{
                odd=odd+arr[i][j];
            }
            }
        }
    }
    printf("Sum of Even=%d\n",even);
    printf("Sum of Odd=%d",odd);
    return 0;
}
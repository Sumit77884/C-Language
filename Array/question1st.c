//GIVEN AN ARRAY OF MARKS OF STUDENTS,IF THE MARK OF ANY STUDENT IS LESS THAN 35 PRINT ITS ROLL NUMBER.
//[ROLL NUMBER HERE REFER TO THE INDEX OF THE ARRATY.]

 #include<stdio.h>
int main(){
    int mar[800],i,nth;
    printf("Enter Number of Student:");
    scanf("%d",&nth);
    for(i=0;i<nth;i++){
    printf("Enter Marks of Roll No.%d:",i);
    scanf("%d",&mar[i]);
    }
    for(i=0;i<=nth;i++){
        if(mar[i]<35)
        printf("%d,",mar[i]);
    }
    return 0;
}
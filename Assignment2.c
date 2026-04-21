#include<stdio.h>
int main(){
    float subject1,subject2,subject3,subject4,subject5,totalmarks,percentage;
    printf("Enter Marks of 1st Subject:");
    scanf("%f",&subject1);
    printf("Enter Marks of 2nd Subject:");
    scanf("%f",&subject2);
    printf("Enter Marks of 3rd Subject:");
    scanf("%f",&subject3);
    printf("Enter Marks of 4th Subject:");
    scanf("%f",&subject4);
    printf("Enter Marks of 5th Subject:");
    scanf("%f",&subject5);
totalmarks=subject1+subject2+subject3+subject4+subject5;
printf("Total Marks of 5 Subjects:%f\n",totalmarks);
percentage=totalmarks/5;
printf("Percentage:%f",percentage);
return 0;
}
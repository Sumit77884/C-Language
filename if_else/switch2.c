#include<stdio.h>
int main()
{
char grade;
printf("ENTER YOUR GRADE:");
scanf("%c",&grade);
switch (grade)
{
case 'A':{
    printf("EXCILIENT");
    break;}
    case 'B':
    printf("VERY GOOD");
    break;
    case 'C':
    printf("GOOD");
    break;
    case 'D':
    printf("SATISFACTORY");
    break;
    case 'E':
    printf("FAIL");
    break;
    case 'F':
    printf("NALAY H REE TU PADH LE THORA");
    break;

default:

printf("SORRY THIS IS GRADE IS NOT ASSIGN.");
    break;
}
return 0;
}
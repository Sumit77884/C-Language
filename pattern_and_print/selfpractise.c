//Write a function code that is returning pointer to the larger value out of two passed values
/*
#include<stdio.h>
int*print(int *xptr,int *yptr)
{
    int *larger;
    larger=*xptr>*yptr?xptr:yptr;
    return larger;
}
int main(){
    int x,y,*result;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    result = print(&x,&y);
    printf("The largest number is :%d",*result);
    return 0;
}
*/
//What will the difference if above program is going
//to be implemented through union?
//Implement the same program through  union and
//differentiate the output as well as memory
//allocation.
#include<stdio.h>
union personal {
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
int main(){
    union personal person;
    printf("input values\n");
    scanf("%s%d%s%d%f",&person.name,&person.day,&person.month,&person.year,&person.salary);
    printf("%s%d%s%d%f\n",person.name,person.day,person.month,person.year,person.salary);
    printf("size of union variable=%ld",sizeof(person));
    return 0;
}

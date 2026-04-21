//Write a function code that is returning pointer to the
//larger value out of two passed values.
/*
#include<stdio.h>
int *function(int *p,int*q)
{
    int *greater;
    greater=*p>*q?p:q;
    return greater;
}
int main(){
    int a,b,*result;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    result=function(&a,&b);
    printf("The larger number is %d",*result);
return 0;
}
*/
//Define a structure type,person name date of joining and salary.
//Using this structure,write a program to read this informatio
//for one person from the key board and print the same ont the
//screen.
/*
#include<stdio.h>
struct
 personal{
char name[20];
int day;
char month[10];
int year;
float salary;
};
int main(){
    struct personal person;
    printf("input Values \n");
    printf("Enter Name:");
    scanf("%s",&person.name);
    printf("Enter Day:");
    scanf("%s",&person.day);
    printf("Enter Month:");
    scanf("%s",&person.month);
    printf("Enter Year:");
    scanf("%s",&person.year);
    printf("Enter salary:");
    scanf("%s",&person.salary);
    printf("NAME:%s\nDATE:%d/%s/%d\nsSALARY:%f",person.name,person.day,person.month,person.year,person.salary);
    printf("SIZE OF STRUCTURE VARIABLE=%ld",sizeof(person));
    return 0;
}

//What will the difference if above program is going to be implemented through union?
//AND DIFFERENCETIATE THE OUTPUT AS WELL AS MEMORY
//ALLOCATION.
// NOTE:Use sizeof operator to differentiate memory allocation of union & structure object.

/*
#include<stdio.h>
union personal{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
int main(){
     union personal person;
    printf("input Values \n");
    printf("Enter Name:");
    scanf("%s",&person.name);
    printf("Enter Day:");
    scanf("%s",&person.day);
    printf("Enter Month:");
    scanf("%s",&person.month);
    printf("Enter Year:");
    scanf("%s",&person.year);
    printf("Enter salary:");
    scanf("%s",&person.salary);
    printf("NAME:%s\nDATE:%d/%s/%d\nsSALARY:%f",person.name,person.day,person.month,person.year,person.salary);
    printf("SIZE OF STRUCTURE VARIABLE=%ld",sizeof(person));
    return 0;
}
*/
/*
#include<stdio.h>
union personal{
    char name[20];
    int day;
    int month;
    int year;
    int salary;
};
int main()
{
    union personal person;
    printf("INPUT VALUES\n");
    printf("Enter Name:");
    scanf("%s",&person.name);
    printf("\nNAME:%s",person.name);
    printf("\nEnter DAY:");
    scanf("%d",&person.day);
    printf("DAY:%d\n",person.month);
    printf("Enter MONTH:");
    scanf("%d",&person.month);
    printf("MONTH:%d\n",person.month);
    printf("Enter year:\n");
    scanf("%d",&person.year);
    printf("YEAR:%d\n",person.year);
    printf("Enter SALARY\n:");
    scanf("%d",&person.salary);
    printf("SALARY:%d\n",person.salary);
    printf("SIZE OF UNION VARIABLE=%d",sizeof(person));
    return 0;

}
*/
//Write a program to store a charecter string in block
// of memory space created by malloc and then modify
//the same to store a large sttring.
/*
#include<stdio.h>
#include<string.h>
int main(){
    char *ptr;
    ptr=(char*)malloc(10);
printf("Memory of size%d created\n",_msize(ptr));
strcpy(ptr,"INITIAL");
printf("\n String stored is:%s\n",ptr);
ptr=(char*)realloc(ptr,20);
printf("\n Memory size modified.\n");
printf("\n Memory still contains:%s\n",ptr);
printf("\nMemory size changed to %d\n",_msize(ptr));
strcpy(ptr,"CHANGED-STRING");
printf("\nString now stored is:%s\n",ptr);
free(ptr);
return 0;
}
*/
//Write a program to creat a one dimension array using dynamic
//memory allocation and search an element in this array
//using linear search.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,i,n,m;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(i=0;i<=n-1;i++){
scanf("%d",(a+i));

    }
    printf("Enter the number to be search:");
    scanf("%d",&m);
    int c=0;
    for(i=0;i<=n-1;i++)
    {
        if(*(a+i)==m)
        {
            c=1;
            break;
        }
    }if(c==0)
    printf("The number is not in the list\n");
    else
    printf("The number is found at position %d\n",i+1);
    return 0;

}




















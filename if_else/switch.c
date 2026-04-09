#include<stdio.h>
int main(){
    int choice;
    printf("ENTER A NUMBER (1-3):");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("YOU CHOSE OPTION 1.\n");
        break;
        case 2:
        printf("YOU CHOSE OPTION 2.\n");
        break;
        case 3:
        printf("YOU CHOSE OPTION 3.\n");
        break;
    
    default:
    printf("INVALID CHOICE.\n");
        break;
    }
    return 0;
}
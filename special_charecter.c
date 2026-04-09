#include<stdio.h>
int main(){
    int i;
    printf("INTEGERS AND THEIR CORRESPONDING CHARACTERS ARE FOLLOWED AS:-");
    for(i=32;i<=126;i++){
printf("\nASCII NUMBER %d. CORRESPONDING CHARACTER:- (%c)",i,(char)i);
    }
    return 0;
    
} 
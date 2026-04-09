#include<stdio.h>
void england(){
    printf("YOUR ARE IN ENGLAND\n");//6
    return;//7
}
void australia(){
    printf("YOU ARE IN AUSTRALIA\n");//4
    england();//Calling england 5
    return;//8
}
void india(){
    printf("You are in India\n");//2
    australia();//Calling australia 3
return;//9
}
int main(){
    india();//Calling india 1
    return 0;//10
}
// Kaam ki baate
/*
1.main()ek hi baar aata hai.
2.Start with main.
3.unlimited functions.
Return type:
*/
#include <stdio.h>

int main() {
    float floatNumber;

    // Input a float number
    printf("Enter a float number: ");
    scanf("%f", &floatNumber);

    // Type cast to int
    int intNumber = (int)floatNumber;

    // Print the integer value
    printf("The integer value is: %d\n", intNumber);

    return 0;
}

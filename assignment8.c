#include <stdio.h>

int main() {
    int C, D;

    // Input two numbers
    printf("Enter value for C: ");
    scanf("%d", &C);

    printf("Enter value for D: ");
    scanf("%d", &D);

    // Swap the contents of C and D
    int temp = C;
    C = D;
    D = temp;

    // Print the swapped values
    printf("After swapping, C = %d and D = %d\n", C, D);

    return 0;
}

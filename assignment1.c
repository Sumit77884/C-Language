#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char str[100];

    // Input values from the user
    printf("Enter an integer (a): ");
    scanf("%d", &a);

    printf("Enter a float (b): ");
    scanf("%f", &b);

    printf("Enter a character (c): ");
    scanf(" %c", &c); // Notice the space before %c to consume any leading whitespace

    printf("Enter a string (str): ");
    scanf(" %[^\n]", str); // %[^\n] is used to read a line with spaces

    // Print the values with newline characters
    printf("Integer (a): %d\n", a);
    printf("Float (b): %f\n", b);
    printf("Character (c): %c\n", c);
    printf("String (str): %s\n", str);

    return 0;
}

/*
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows ");
    scanf("%d", &rows);

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Inner loop for printing asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows ");
    scanf("%d", &rows);

    // Outer loop for the number of rows
    for (i = rows; i >= 1; i--) {
        // Inner loop for spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Inner loop for printing asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

// Function to print elements of an array
void printArray(int arr[], int size) {
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Define an array
    int myArray[] = {1, 2, 3, 4, 5};
    
    // Calculate the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Call the function to print the array elements
    printArray(myArray, size);

    return 0;
}

#include <stdio.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int size) {
    // Check if the array is empty or has only one element
    if (size <= 1) {
        return size;
    }

    // Initialize the index to store the unique elements
    int uniqueIndex = 0;

    // Iterate through the array to check for duplicates
    for (int i = 0; i < size - 1; i++) {
        // If the current element is different from the next one, store it in the unique index
        if (arr[i] != arr[i + 1]) {
            arr[uniqueIndex++] = arr[i];
        }
    }

    // Store the last element (as it will always be unique in a sorted array)
    arr[uniqueIndex++] = arr[size - 1];

    return uniqueIndex;
}

int main() {
    int sortedArray[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    // Calculate the size of the array
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    // Call the function to remove duplicates
    int newSize = removeDuplicates(sortedArray, size);

    // Print the array after removing duplicates
    printf("Array without duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", sortedArray[i]);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    printf("Armstrong numbers between 1 to 500:\n");

    for (int i = 1; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;

}
*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char Name[] = "Sumit,Kumar";
    char destination[20];
    strcpy(destination, Name);
    printf("Copied String: %s\n", destination);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char Name[20] = "Sumit";
    char Surname[] = ", Kumar";
    strcat(Name, Surname);
    printf("Concatenated String: %s\n", Name);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char Name[] = "Sumit";
    char SurName[] = "Singh";
    int result = strcmp(Name, SurName);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char fullString[] = "Data Science";
    char substring[6];
    strncpy(substring, fullString + 5, 5);
    substring[5] = '\0'; // Null-terminate the substring
    printf("Substring: %s\n", substring);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "C programming is fun.";
    char *found = strstr(sentence, "programming");

    if (found != NULL) {
        printf("Substring found at position: %ld\n", found - sentence);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
*/
#include <stdio.h>

// Function to swap values without using a third variable
void swapWithoutTemp(int *a, int *b) {
    // Using arithmetic operations
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    // Alternatively, using bitwise XOR
    // *a = *a ^ *b;
    // *b = *a ^ *b;
    // *a = *a ^ *b;
}

int main() {
    int num1, num2;

    // Input values
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to swap values
    swapWithoutTemp(&num1, &num2);

    printf("\nAfter swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}










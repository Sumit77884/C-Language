
#include <stdio.h>

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array with the given size
    int arr[size];

    // Read elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print elements in reverse order along with their addresses
    printf("\nArray elements in reverse order along with their addresses:\n");
    for (int i = size - 1; i >= 0; --i) {
        printf("Element %d: %d (Address: %p)\n", i, arr[i], (void*)&arr[i]);
    }

    return 0;
}

/*
#include <stdio.h>

// Define the structure type 'personal'
struct personal {
    char name[50];
    char dateOfJoining[20];
    float salary;
};

int main() {
    // Declare a variable of type 'personal'
    struct personal person;

    // Input information for one person
    printf("Enter person's name: ");
    scanf("%s", person.name);

    printf("Enter date of joining: ");
    scanf("%s", person.dateOfJoining);

    printf("\nEnter salary: ");
    scanf("%f", &person.salary);

    // Print the information on the screen
    printf("\nPerson's Information:\n");
    printf("Name: %s\n", person.name);
    printf("Date of Joining: %s\n", person.dateOfJoining);
    printf("Salary: %.2f\n", person.salary);

    return 0;
}
*/


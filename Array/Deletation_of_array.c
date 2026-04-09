/*
#include <stdio.h>

void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index!\n");
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i+1];
    }

    (*size)--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int index;

    // Display original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Get index to delete
    printf("Enter index to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

    // Delete element
    deleteElement(arr, &size, index);

    // Display modified array
    printf("Modified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/
#include <stdio.h>

int main() {
    int arr[100], size, i, pos;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter %d elements:-\n", size);
    for (i = 0; i < size; i++) {
        printf("Enter %d elements:",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion:-");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    // Input the position of the element to delete
    printf("\nEnter the position of the element to delete (1 to %d): ", size);
    scanf("%d", &pos);

    if (pos < 1 || pos > size) {
        printf("Invalid position. Deletion failed.\n");
    } else {
        // Shift elements to the left to overwrite the element to be deleted
        for (i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array
        size--;

        // Print the updated array
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}


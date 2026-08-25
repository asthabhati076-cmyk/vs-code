#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Initial array
    int size = 5;                        // Current number of elements
    int element = 25;                    // Value to insert
    int index = 4;                       // Target index (0-based)

    // Shift elements to the right from the end down to the target index
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the target index
    arr[index] = element;
    size++; // Increase the array size

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    // Initialize a 1D array with 5 elements
    int arr[] = {10, 20, 30, 40, 50};
    
    // Calculate the total number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Traversing the array using a for loop:\n");
    
    // Loop runs from index 0 up to size - 1
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}

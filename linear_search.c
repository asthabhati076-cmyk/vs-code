#include <stdio.h>

int main() {
    int arr[100], size, i, search, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element found at position %d\n", i + 1);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int a[2][2] = {{5, 8}, {3, 6}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int c[2][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("The result of matrix subtraction is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int r, c, a[10][10], b[10][10], sum[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Matrix 1 elements:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &a[i][j]);
    printf("Matrix 2 elements:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &b[i][j]);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) sum[i][j] = a[i][j] + b[i][j];
    printf("Sum:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

void main() {
    int arr1[3][3], arr2[3][3], sumarr[3][3], i, j;

    // Input first matrix
    printf("Enter first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Adding the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sumarr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing the sum matrix correctly
    printf("The sum of both matrices is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sumarr[i][j]); // Print numbers in the same row
        }
        printf("\n"); // New line after each row
    }
}

#include <stdio.h>

int main() {
    int arr[6] = {1, 45, 33, 54, 45, 78}; 
    int i, j, k, n = 6;  // n keeps track of the valid array size

    printf("Orignal list: ");
    for(i = 0; i < 6; i++) {
        printf("%d ",arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {  // If duplicate found
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];  // Shift elements left
                }
                n--; // Reduce array size
                j--; // Check the same index again after shifting
            }
        }
    }

    // Printing unique elements
    printf("\nList without duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

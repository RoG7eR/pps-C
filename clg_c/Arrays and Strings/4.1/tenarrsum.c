#include<stdio.h>

void main() {
    int sum = 0, arr[10], i;

    for(i = 0; i < 10; i++) {
        printf("Enter element no. %d:", i+1);
        scanf("%d",&arr[i]);        
    }

    for(i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("Sum of the given array: %d", sum);

}
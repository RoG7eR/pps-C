//Write a program to read and display values of an integer array. Allocate space dynamically for the array.

#include<stdio.h>

void main() {
    int n,i;

    printf("How many elements to be entered: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter %d numbers: ",n);
    for(i = 0; i < n; i++) {
        scanf("%d",&num[i]);
    }

    printf("The %d array elements are: ",n);
    for(i = 0; i < n; i++) {
        printf("%d",num[i]);
        if(i < n - 1) {
            printf(",");
        }
    }
}
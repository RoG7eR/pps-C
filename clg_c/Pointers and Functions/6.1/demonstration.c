//Write a program that demonstrates the use of address of (&) and pointer (*) operator.

#include<stdio.h>

void max_min(int a[], int n, int *max, int *min);

void main() {
    int N = 0,i,big,small;
    printf("How many numbers do you wish to enter: ");
    scanf("%d",&N);
    
    int num[N];

    printf("Enter %d array elements: ",N);
    for(i = 0; i < N; i++) {           
        scanf("%d",&num[i]);
    }

    printf("The entered array is: ");
    for(i = 0; i < N; i++) {
        printf("%d",num[i]);
        if(i < N - 1) {
            printf(", ");
        }
    }
    
    max_min(num, N, &big, &small);
    printf("\nLargest element: %d",big);
    printf("\nSmallest element: %d",small);
}

void max_min(int a[], int n, int *max, int *min) {
    int i;
    *max = *min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > *max) {
            *max = a[i];
        }
        else if(a[i] < *min) {
            *min = a[i];
        }        
    }
}
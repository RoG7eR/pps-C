#include<stdio.h>

void main() {
    int i,even = 0,odd = 0,arrN;

    printf("Enter the size of array: ");
    scanf("%d",&arrN);

    int arr[arrN];

    for(i = 0; i < arrN; i++) {
        printf("Enter element no. %d: ", i);
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("Total number of odd element is %d and even elements is %d",odd,even);
    
}
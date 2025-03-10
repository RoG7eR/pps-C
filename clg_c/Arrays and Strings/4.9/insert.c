#include<stdio.h>

void main() {
    int i, arr[10],elementnum = 0;

    printf("Enter numbers to fill the array:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element no. %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Current array is: ");
    for(i = 0; i < 10; i++) {
        printf("%d ",arr[i]);
    }
    printf("\nEnter element number to edit: ");
    scanf("%d",&elementnum);
    for(i = 0; i < 10; i++) {
        if(i == elementnum) {
            printf("Enter new number: ");
            scanf("%d", &arr[i]);
        }
    }
    printf("New array is: ");
    for(i = 0; i < 10; i++) {
        printf("%d ",arr[i]);
    }
}
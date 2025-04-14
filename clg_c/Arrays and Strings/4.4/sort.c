#include<stdio.h>

void main() {
    int i, j, temp, sort[5];

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d",&sort[i]);
    }

    printf("The entered numbers are: ");
    for(i = 0;i < 5; i++) {
        printf("%d ",sort[i]);
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(sort[j] > sort[j + 1]) { // ✅ Corrected here
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;                
            }            
        }        
    }
    
    printf("\nSorted array is: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", sort[i]);
    }
}
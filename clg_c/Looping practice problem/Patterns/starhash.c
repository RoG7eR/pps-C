#include<stdio.h>

void main() {
    int i,j,k;
    //outer loop to control rows
    for(i = 1;i <= 5; i++) {
        if(i % 2 != 0) {
            for(j = 1; j <= i; j++) {
                printf("*");        
            }
        }
        else
        {
            for(k = 1; k <= i; k++) {
                printf("#");        
            }
        }                           
        printf("\n");
    }
}
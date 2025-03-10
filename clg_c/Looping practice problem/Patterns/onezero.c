#include<stdio.h>

void main() {
    int i,j,k,one = 1,zero = 0;

    for(i = 1; i <= 5; i++) {
        if(i % 2 != 0) { //if statement for odd rows
            for(j = 1; j <= i; j++) {
                printf("%d",one);
                one = 1 - one;
            }
        }
        else {
            for(k = 1; k <= i; k++) {
                printf("%d",zero);
                zero = 1 + zero;                
            }
        }       
        printf("\n");
    }
}
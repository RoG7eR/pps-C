#include<stdio.h>

void main() {
    int i,j;
    //outer loop to control rows
    for(i = 1;i <= 5; i++) {
        for(j = 1; j <= i; j++) { //inner loop to print numbers in each row
            printf("%d",i); //i was taken because we want each number printed according to the number of row
        }
        printf("\n");
    }
}
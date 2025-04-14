//Write a program using an array that takes input of five subject’s marks and counts the percentage and display result.

#include<stdio.h>

void percentage(float num[5],float *total, float *percent);

void main() {
    int i;
    float score[5],total = 0,percent = 0;

    printf("Enter marks (Out of 100): \n");
    for(i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d: ",i+1);
        scanf("%f",&score[i]);
    }
    percentage(score,&total,&percent);
    printf("\nCurrent total marks are: %f (Out of 500)",total);
    printf("\nPercentage: %f",percent);

}

void percentage(float num[5],float *total, float *percent) {
    int i;
    for(i = 0; i < 5; i++) {
        *total += num[i];
    }
    *percent = *(total) / 5;
}
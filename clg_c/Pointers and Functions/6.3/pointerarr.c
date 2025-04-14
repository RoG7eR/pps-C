//Write a program to display the content of a 1-D array using a pointer.

#include<stdio.h>

void main () {
    int num[5],*p;

    printf("Enter 5 numbers: ");
    for(p = num; p < num + 5; p++) {
        scanf("%d",p);
    }

    printf("Entered numbers are: ");
    for(p = num; p < num + 5; p++) {
        printf("%d ",*p);
    }
}
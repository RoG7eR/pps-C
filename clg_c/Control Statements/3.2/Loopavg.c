//Write a program to read any 7 numbers and print the average value using for loop.
#include<stdio.h>
#include<conio.h>

void main() {
    int i = 1, num, sum = 0,avg;

    for(i = 1; i <= 7; i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    }
    avg = sum/7;
    printf("Average is: %d", avg);

}
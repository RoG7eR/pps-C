//Write a program to sum given two integer numbers using function.

#include<stdio.h>

int sum(int a, int b);

void main() {
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int total = sum(a, b);
    printf("Sum of the numbers is: %d", total);

}

int sum(int a, int b) {
    return a + b;
}
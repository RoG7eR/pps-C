// Write a program that demonstrates call by value and call by reference concept in function argument.
#include<stdio.h>

// Function prototype
void callByValue(int a);
void callByReference(int *b);

void main() {
    int x = 10, y = 20;

    printf("Before Call by Value: x = %d\n", x);
    callByValue(x);
    printf("After Call by Value: x = %d\n\n", x);

    printf("Before Call by Reference: y = %d\n", y);
    callByReference(&y);
    printf("After Call by Reference: y = %d\n", y);

}

// Call by Value function
void callByValue(int a) {
    a = a + 10;
    printf("Inside Call by Value function: a = %d\n", a);
}

// Call by Reference function
void callByReference(int *b) {
    *b = *b + 20;
    printf("Inside Call by Reference function: *b = %d\n", *b);
}

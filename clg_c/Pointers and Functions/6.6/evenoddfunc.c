//Write a program using the user defined function with Argument and check whether the number is even or odd.

#include<stdio.h>

int evenodd(int a);

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int ans = evenodd(num);
    if(ans == 1) {
        printf("The given number is: Even\n");
    } else {
        printf("The given number is: Odd\n");
    }

}

int evenodd(int a) {
    if(a % 2 == 0) {
        return 1; // Even
    } else {
        return 0; // Odd
    }
}
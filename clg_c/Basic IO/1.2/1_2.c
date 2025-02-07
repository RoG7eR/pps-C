#include<stdio.h>
#include<conio.h>

int a, b, sum, multi;
int main () {
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    sum = a + b;
    multi = a * b;
    printf("Total is: %d ",sum);
    printf("\nProduct is: %d ",multi);
    getch;

}


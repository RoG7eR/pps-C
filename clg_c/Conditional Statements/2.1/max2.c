#include<stdio.h>
#include<conio.h>

void main() {
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Enter second number:");
    scanf("%d",&b);

    if(a>b) {
        printf("First number %d is greater than second number %d",a,b);
    }
    else if(a == b) {
        printf("Both the numbers are same");
    }
    else {
        printf("Second number %d is greater than first number %d",b,a);        
    }
}
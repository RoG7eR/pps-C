#include<stdio.h>
#include<conio.h>

int a, b, c;
int main () {
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    // LOGIC
    c = a;
    a = b;
    b = c;
    
    printf("After swapping: a=%d b=%d",a,b);    
    getch;

}
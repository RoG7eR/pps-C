#include<stdio.h>
#include<conio.h>

int a, b, c;
int main () {
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    // LOGIC without third variable
    a = a + b; // Exp a=2 and b=1, so a + b = 3(a)
    b = a - b; // Exp a=2 and b=1, so a - b = 1(b)
    a = a - b; // Exp a=2 and b=1, so a - b = 2(a)
    
    printf("After swapping: a=%d b=%d",a,b);    
    getch;

}
//Write a program using function to count the area of circle, triangle, rectangle and square.

#include<stdio.h>
#define PI 3.14

float AreaOfCircle(float r);
float AreaOfTriangle(float b, float h);
float AreaOfRectangle(float l, float b);
float AreaOfSquare(float l);

void main() {
    int option;
    float r,AOC,b,h,AOT,l,AOR,AOS;

    printf("==============MENU=============");
    printf("\n1) Calculate area of circle");
    printf("\n2) Calculate area of triangle");
    printf("\n3) Calculate area of rectangle");
    printf("\n4) Calculate area of square");
    printf("\nEnter a number to proceed: ");
    scanf("%d",&option);

    switch (option)
    {
    case 1:        
        printf("\nEnter radius of the circle: ");
        scanf("%f",&r);
        printf("\nCalculating using the formula pi * r^2...");
        AOC = AreaOfCircle(r);
        printf("\nArea of circle is: %f",AOC);
        break;
    
    case 2:        
        printf("\nEnter base of the triangle: ");
        scanf("%f",&b);
        printf("\nEnter height of the triangle: ");
        scanf("%f",&h);
        printf("\nCalculating using the formula 1/2 * b * h...");
        AOT = AreaOfTriangle(b, h);
        printf("\nArea of triangle is: %f",AOT);
        break;

    case 3:        
        printf("\nEnter length of the rectangle: ");
        scanf("%f",&l);
        printf("\nEnter breadth of the rectangle: ");
        scanf("%f",&b);
        printf("\nCalculating using the formula l * b...");
        AOR = AreaOfRectangle(l, b);
        printf("\nArea of rectangle is: %f",AOR);
        break;

    case 4:        
        printf("\nEnter length of the side of the square: ");
        scanf("%f",&l);
        printf("\nCalculating using the formula l * l...");
        AOS = AreaOfSquare(l);
        printf("\nArea of square is: %f",AOS);
        break;
            
    default:
        printf("Invalid option");
        break;
    }
}

float AreaOfCircle(float r) {
    float area = 0;
    area = PI * (r * r);
    return area;
}

float AreaOfTriangle(float b, float h) {
    float area = 0;
    area = 0.5 * b * h;
    return area;
}

float AreaOfRectangle(float l, float b) {
    float area = 0;
    area = l * b;
    return area;
}

float AreaOfSquare(float l) {
    float area = 0;
    area = l * l;
    return area;
}
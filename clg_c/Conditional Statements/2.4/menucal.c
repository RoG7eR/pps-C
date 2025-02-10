#include<stdio.h>
#include<conio.h>

void main() {
    int input;
    float num1,num2,sum,subtract,multi,div;

    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);

    printf("\n**************************************************************************");
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<CALCULATOR>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("\n**************************************************************************");

    sum = num1 + num2;
    subtract = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    
    printf("\n1) Addition ");
    printf("\n2) Subtraction ");
    printf("\n3) Multiplication ");
    printf("\n4) Division");
    printf("\nPress a number (1 - 4): ");
    scanf("%d",&input);

    if(input == 1) {
        printf("Sum = %f",sum);
    }
    else if(input == 2) {
        printf("Subtraction = %f",subtract);
    }
    else if(input == 3) {
        printf("Multiplitcation = %f",multi);
    }
    else if(input == 4) {
        printf("Division = %f",div);
    }
    else {
        printf("Enter only numbers between 1 to 4");
    }


}
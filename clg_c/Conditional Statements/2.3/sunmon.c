#include<stdio.h>
#include<conio.h>

void main() {
    int num;

    printf("Enter a number(1-7): ");
    scanf("%d",&num);

    if(num == 1) {
        printf("\nSunday");
    }
    else if(num == 2) {
        printf("\nMonday");
    }
    else if(num == 3) {
        printf("\nTuesday");
    }
    else if(num == 4) {
        printf("\nWednesday");
    }
    else if(num == 5) {
        printf("\nThursday");
    }
    else if(num == 6) {
        printf("\nFriday");
    }
    else if(num == 7) {
        printf("\nSaturday");
    }
    if(num > 7) {
        printf("\nOnly numbers between 1 to 7");
    }
    else if(num < 1) {
        printf("Invalid number");
    }
    
}
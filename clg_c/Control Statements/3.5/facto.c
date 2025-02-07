#include<stdio.h>
#include<conio.h>

void main() {

    int num,i,facto,multiply = 1;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i = num;i >= 1;i--) {       
        printf("%d*",i);
        if(i == 1) {
            printf("%d",i);
        }
        multiply *= i;
        
    } 
    
    printf("\nFactorial of the number is: %d",multiply);
  
    }


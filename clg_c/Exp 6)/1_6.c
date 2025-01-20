#include<stdio.h>
#include<conio.h>

int amount;
float ruppees, paise;
int main () {
    printf("Enter amount: ");
    scanf("%d",&amount);
    
    ruppees = amount / 100;
    paise = amount % 100;
    
    printf("\nRuppees: %f",ruppees);
    printf("\nPaisa: %f",paise);       
    getch;

}
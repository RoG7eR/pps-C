#include<stdio.h>
#include<conio.h>

void main() {
    int i,n;

    struct bank
    {
        int account_no;
        char account_holder_name[40];
        int balance;
    };
    printf("How many accounts do you wish to add: ");
    scanf("%d",&n);

    struct bank b[n];
    for(i = 0; i < n; i++) {
        printf("Enter Account Number %d:\n ",i+1);
        scanf("%d",&b[i].account_no);
        printf("Enter Account Holder Name %d:\n ",i+1);
        scanf(" %[^\n]s", b[i].account_holder_name);
        printf("Enter current balance:\n ");
        scanf("%d",&b[i].balance);
    }
    
    printf("The accounts with balance less than 5000 are: ");
    for(i = 0; i < n; i++) {
        if(b[i].balance < 5000) {           
            printf("\nAccount name: %s",b[i].account_holder_name);
            printf("\nAccount number: %d",b[i].account_no);
            printf("\nAccount balance: %d",b[i].balance);
        }
        else if (b[i].balance > 5000 && b[i].balance < 5000) {
            printf("None");
        }
    }
getch();
    
}
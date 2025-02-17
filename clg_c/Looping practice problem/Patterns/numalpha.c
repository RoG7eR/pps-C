#include<stdio.h>

void main() {
    int i,j,k,space,num = 1;
    char alphabet = 'A';
    //outer loop to control rows
    for(i = 1;i <= 5; i++) {
        for(space = 1;space <= 5 - i; space++) { //space loop to control space to print in a centralized triangle pattern
            printf(" ");
        }
        if(i % 2 != 0) { //if statement to check for even and odd, Numbers in even rows and Alphabets in odd rows
            for(j = 1; j <= i; j++) { //another loop to print numbers according to the number of row
                printf("%d ", num);
                num++; //additional num variable to print numbers which keeps on increasing from '1'       
            }
        }
        else //else for even rows
        {
            for(k = 0; k < i; k++) { //another loop to print alphabets according to the number of row
                printf("%c ", alphabet);
                alphabet++; //additional alphabet variable which keeps on increasing from the beginning 'A'       
            }
        }                           
        printf("\n");
    }
}
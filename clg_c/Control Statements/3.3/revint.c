//Write a program to reverse a given integer number.

#include<stdio.h>
#include<conio.h>

void main() {
    int i,revnum = 0,num;

    printf("Enter a number: ");
    scanf("%d", &num);

   do
   {
    printf("%d", num%10);
    num = num/10;
   } while (num != 0);
   
}
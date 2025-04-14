//Write a program to reverse the elements of an array and store it in another array.

#include<stdio.h>
#include<string.h>

void main() {
    char str[20],revstr[20];
    int i, length;

    printf("Enter a string: ");
    gets(str);

    printf("\nCurrent string is: %s",str);
    length = strlen(str);
    for(i = 20 - 1; i >= 0; i--) {
        revstr[i] = str[length - 1 - i];
    }
    revstr[length] = '\0';
    
    printf("\nReversed string is: %s",revstr);

}
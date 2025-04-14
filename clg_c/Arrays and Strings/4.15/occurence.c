// Find out the occurrence of each character in a given string.

#include<stdio.h>
#include<string.h>

void main() {
    char str[40],ch;
    int i,occur = 0,length;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Enter a character you wish to find occurence of: ");
    scanf("%c",&ch);

    for(i = 0; i < length; i++) {
        if(str[i] == ch) {
            occur++;       
        }
    }
    
    if (occur > 0) {
        printf("Occurrence of '%c' is: %d\n", ch, occur);
    } else {
        printf("The entered character '%c' does not exist in the string.\n", ch);
    }
}
#include<stdio.h>
#include<conio.h>

void main() {
    char character;

    printf("Enter a character: ");
    scanf("%c",&character);

    switch (character) { 
        case 'a': case 'A':
            printf("This character is a vowel"); 
            break; 
        case 'e': case 'E': 
            printf("This character is a vowel"); 
            break;
        case 'i': case 'I': 
            printf("This character is a vowel"); 
            break;
        case 'o': case 'O':
            printf("This character is a vowel"); 
            break;
        case 'u': case 'U':
            printf("This character is a vowel"); 
            break;     
        default: 
            printf("This character is not a vowel"); 
            break;
        } 
}
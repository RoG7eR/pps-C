#include<stdio.h>
#include<string.h>

void main() {
    char str[40];
    int length;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Length of string is: %d",length);
}
//Write a function which accepts a character array as an argument from the user.
//The function should convert all the lowercase characters into uppercase case.

#include<stdio.h>

void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    toUpperCase(str);

    printf("String in uppercase: %s\n", str);

}

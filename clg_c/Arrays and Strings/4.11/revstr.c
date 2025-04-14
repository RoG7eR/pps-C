//Write a program to reverse the string.(without inbuilt Function)

#include<stdio.h>

void main() {
    char str[40],rev;
    int i = 0,j;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
        i++;
    }
    j = i - 1;
    i = 0;

    while(i < j) {
        rev = str[i];
        str[i] = str[j];
        str[j] = rev;
        i++;
        j--;
    }

    printf("Reversed string: %s\n",str);

}

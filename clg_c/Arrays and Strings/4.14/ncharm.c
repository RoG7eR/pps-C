// Program to extract n characters starting from m in a given string.
#include<stdio.h>
#include<string.h>

void main() {
    char str[40],extract[40];
    int i,j,n_char,m_pos;

    printf("Enter a string: ");
    gets(str);

    printf("\nHow many characters do you wish to extract: ");
    scanf("%d",&n_char);

    printf("\nFrom which position do you wish to extract: ");
    scanf("%d",&m_pos);

    for (i = m_pos - 1; i < (m_pos - 1) + n_char && str[i] != '\0'; i++) {
        extract[j] = str[i];
        j++;
    }
    extract[j] = '\0';

    printf("The extracted string is: %s",extract);
}
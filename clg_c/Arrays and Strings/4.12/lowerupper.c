#include<stdio.h>
#include<string.h>

void main() {
    char str[40];
    int decision;

    printf("Enter a string: ");
    gets(str);

    printf("Press 1 for lowercase and 2 for Uppercase: ");
    scanf("%d",&decision);

    switch (decision)
    {
    case 1: 
        strlwr(str);      
        printf("%s",str);
        break;
    case 2:
        strupr(str);
        printf("%s",str);
        break;
    default:
        printf("Valid options are 1 and 2 only");
        break;
    }
}
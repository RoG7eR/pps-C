#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100], str3[100];
    int choice;

    printf("Enter first string: ");
    gets(str1);  // Warning: gets() is unsafe, use fgets() in modern code

    printf("Enter second string: ");
    gets(str2);

    do {
        printf("\n------ String Operations Menu ------\n");
        printf("1. Length of first string\n");
        printf("2. Copy second string to first string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse first string\n");
        printf("6. Convert first string to lowercase\n");
        printf("7. Convert first string to uppercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character

        switch (choice) {
            case 1:
                printf("Length of first string: %d\n", strlen(str1));
                break;

            case 2:
                strcpy(str1, str2);
                printf("After copying, first string: %s\n", str1);
                break;

            case 3:
                strcpy(str3, str1); // Save original str1
                strcat(str3, str2);
                printf("Concatenated string: %s\n", str3);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:               
                printf("Reversed first string: %s\n", strrev(str1));
                break;

            case 6:                
                printf("First string in lowercase: %s\n", strlwr(str1));
                break;

            case 7:
                printf("First string in uppercase: %s\n", strupr(str1));
                break;

            case 8:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 8);

}

//Write a program to create a union of student’s roll_no and name and display the records.
#include<stdio.h>
#include<string.h>

// Define a union
union Student {
    int roll_no;
    char name[50];
};

void main() {
    union Student s;

    // Input roll number
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    // Display roll number
    printf("Roll Number: %d\n", s.roll_no);

    // Input name
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name); // Space before %[^\n] to consume the newline character

    // Display name
    printf("Name: %s\n", s.name);

}

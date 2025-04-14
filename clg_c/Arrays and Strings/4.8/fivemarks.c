#include<stdio.h>   

void main() {
    char subjects[5][25] = {"DELA","Engineering Physics","ISM", "TOM","PPS"};
    int i,j, marks[5][5],total[5] = {0};
    
    for(i = 0; i < 5; i++) {
        printf("Enter marks of the student%d:\n ", i+1);
        for(j = 0; j < 5; j++) {
            printf("Marks obtained in %s: ",subjects[j]);
            scanf("%d",&marks[i][j]);
            total[i] += marks[i][j];
        }
    }

    printf("\nMarks obtained:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        for(j = 0; j < 5; j++) {
            printf("%s: %d ", subjects[j], marks[i][j]);
        }
        printf(" | Total: %d\n", total[i]);
    }

    int first = -1, second = -1;
    for(i = 0; i < 5; i++) {
        if(first == -1 || total[i] > total[first]) {
            second = first;
            first = i;
        } else if(second == -1 || total[i] > total[second]) {
            second = i;
        }
    }

    // Display top two students
    printf("1. Student %d with total marks: %d\n", first + 1, total[first]);
    printf("2. Student %d with total marks: %d\n", second + 1, total[second]);
}
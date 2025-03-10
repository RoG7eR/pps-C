#include<stdio.h>   

void main() {
    char subjects[5][25] = {"DELA","Engineering Physics","ISM", "TOM","PPS"};
    int i,j, marks[5][5];
    
    for(i = 0; i < 5; i++) {
        printf("Enter marks of the student%d:\n", i++);
        for(j = 0; j < 5; j++) {
            printf("Marks obtained in %s: ",subjects[j]);
            scanf("%d",marks[i][j]);
        }
    }

    printf("Marks obtained:");
    for(i = 0; i < 5; i++) {
        printf("Student %d", i++);
        for(j = 0; j < 5; j++) {
            printf("%s: %d",subjects[i][j],marks[i][j]);            
        }
        printf("\n");
    }

}
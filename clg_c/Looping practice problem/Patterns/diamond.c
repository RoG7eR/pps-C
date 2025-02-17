#include<stdio.h>

void main() {
    int i,j,k,a,b,c;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for(a = 4; a >= 1; a--) {
        for(c = 1; c <= 5 - a; c++) {
            printf(" ");
        }
        for(b = 1; b <= a; b++) {
            printf("* ");
        }
        printf("\n");
    }
}
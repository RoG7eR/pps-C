#include<stdio.h>
#include<conio.h>

void main() {
    int i,zero = 0,one = 1,num,fibbo;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(i = 1;i <= num;i++) {
        printf("%d",zero);
        fibbo = zero + one;
        one = zero;
        zero = fibbo;

    }

}
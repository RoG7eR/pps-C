#include<stdio.h>
#include<conio.h>

void main() {
    int a,b,c;

    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b) {
        if(a>c) {
            printf("First number %d is the greatest",a);
        }
        else {
            printf("Third number %d is greatest",c);
        }
    }
    else if (a == b && b == c && a == c)
    {
        printf("All numbers are equal");
    }
    else {
        if(b>a) {
            printf("Second number %d is greatest",b);
        }
        else {
            printf("Third number %d is greatest",c);
        }
    }
    
}
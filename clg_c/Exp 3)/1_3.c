#include<stdio.h>
#include<conio.h>
#define PI 3.14

int sq, rectb, rectl, areaS, areaR, perimeterR;
float radC, areaC;
int main () {
    printf("Enter side of square: ");
    scanf("%d",&sq);
    areaS = sq * sq;
    printf("Area is: %d",areaS);

    printf("\nEnter length of rectangle: ");
    scanf("%d",&rectl);
    printf("Enter breadth of rectangle: ");
    scanf("%d",&rectb);
    areaR = rectl * rectb;
    printf("\nArea is: %d",areaR);
    perimeterR = 2 * (rectb + rectl);
    printf("\nPerimeter of rectangle is: %d ",perimeterR);

    printf("\nEnter radius of circle: ");
    scanf("%f",&radC);
    areaC = PI * radC * radC;
    printf("\nArea of circle is: %f ",areaC);



    
}


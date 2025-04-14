//Write a program to define structure with tag state with fields state name, number of districts and total population. Read and display the data.

#include<stdio.h>

void main() {
    struct state
    {
        char state_name[40];
        int districts;
        long population;
    };

    struct state state1;

    printf("Enter State name: ");
    gets(state1.state_name);
    printf("Enter Number of Districts: ");
    scanf("%d",&state1.districts);
    printf("Enter Population: ");
    scanf("%ld",&state1.population);

    printf("------------State Information-----------");
    printf("\nName: %s",state1.state_name);
    printf("\nDistricts: %d",state1.districts);
    printf("\nPopulation: %ld",state1.population);
}
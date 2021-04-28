#include <stdio.h>
#include <math.h>

int main(void) 
{
    float length, distance, cost, total_cost;
    int number_of_trees;

    printf("Enter the length of the street in Meters (m): ");
    scanf("%f", &length);

    printf("Enter the distance between each two tree in Meters (m): ");
    scanf("%f", &distance);
    
    printf("Enter the cost of planting each tree in dollar: ");
    scanf("%f", &cost);

    number_of_trees = (length / distance) + 1; // number_of_trees = round(number_of_trees);

    total_cost = number_of_trees * cost;

    printf("Number of trees is %d\n", number_of_trees);
    printf("Total cost in dollar is %.2f\n", total_cost);

    return 0;
}
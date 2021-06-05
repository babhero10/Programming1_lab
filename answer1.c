#include <stdio.h>
#include <stdlib.h>

/*
    Get the length and the width of a rectangle
    and print the area and the circumference
*/

int main()
{
    float length, width, area, circum;

    printf("Length = ");
    scanf("%f", &length);

    printf("Width = ");
    scanf("%f", &width);

    area = length * width;
    circum = 2 * (length + width);

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circum);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    const float PI = 3.14159;

    // Get radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Diameter
    printf("Diameter = %.3f\n", radius * 2);

    // Circumference = 2 * pi * radius
    printf("Circumference = %.3f\n", 2 * PI * radius);

    // Area = radius^2 * pi
    printf("Area = %.3f\n", PI * pow(radius, 2));

    return 0;
}
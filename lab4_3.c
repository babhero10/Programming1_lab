#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Get input
    printf("Enter three integer numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    // Max value
    int max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;

    // Min value
    int min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;

    // Show
    printf("%d is the Largest, %d is the Smallest\n", max, min);

    return 0;
}
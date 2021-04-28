#include <stdio.h>

int main(void) 
{

    int num1, num2, num3;

    printf("Enter three integer numbers: ");

    scanf("%d%d%d", &num1, &num2, &num3);

    float average = (num1 + num2 + num3) / 3;

    printf("Average of the three eneted numbers is %.2f\n", average);

    return 0;
}
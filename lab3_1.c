#include <stdio.h>

int main(void) 
{
    int num1, num2, num3;
    printf("Enter there integer numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    float average = (float)(num1 + num2 + num3) / 3;
    printf("%f\n", average);
    return 0;
}
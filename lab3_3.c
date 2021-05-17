#include <stdio.h>

int main(void) 
{
    int number;
    printf("Enter five digit number: ");
    scanf("%d", &number);
    int d1, d2, d3, d4, d5;
    
    d1 = number % 10;
    number /= 10;

    d2 = number % 10;
    number /= 10;
    
    d3 = number % 10;
    number /= 10;
    
    d4 = number % 10;
    number /= 10;
    
    d5 = number % 10;

    printf("%d  %d  %d  %d  %d\n", d5, d4, d3, d2, d1);

    return 0;
}
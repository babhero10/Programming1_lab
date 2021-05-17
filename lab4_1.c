#include <stdio.h>

int main()
{
    int number;
    printf("Enter integer number: ");
    scanf("%d", &number);

    int d1, d2, d4, d5;

    d1 = number % 10;
    number /= 10;
    
    d2 = number % 10;

    number /= 100; // Skip the 3rd digit
    
    d4 = number % 10;
    number /= 10;
    
    d5 = number % 10;

    if (d1 == d5 && d2 == d4)
    {
        printf("A palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}
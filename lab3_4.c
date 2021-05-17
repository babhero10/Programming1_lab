#include <stdio.h>

int main(void) 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even number!\n");
    }
    else
    {
        printf("Odd number!\n");   
    }
    
    return 0;
}
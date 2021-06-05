#include <stdio.h>
#include <stdlib.h>

/*
    Get two integer number x and y
    and check if x is multiple by y or not
*/

int main()
{
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    if (x % y == 0)
        printf("x is multiple by y\n");
    else
        printf("x is not multiple by y\n");

    return 0;
}

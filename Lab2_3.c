#include <stdio.h>
#include <math.h>

int main(void) 
{
    int number = 0;

    printf("Number\tSquare\tCube\n");

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    number++;

    printf("%d\t%d\t%d\n", number, number * number, number * number * number);

    return 0;
}


void using_loops_pow()
{
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t%.f\t%.f\n", i,pow(i, 2), pow(i, 3));
    }
}
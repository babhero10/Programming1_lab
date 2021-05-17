#include <stdio.h>

int main()
{
    int grade;
    printf("Enter grade (integer number): ");
    scanf("%d", &grade);

    if (grade >= 90)
        printf("A\n");
    else if (grade < 90 && grade >= 80)
        printf("B\n");
    else if (grade < 80 && grade >= 70)
        printf("C\n");
    else if (grade < 70 && grade >= 60)
        printf("D\n");
    else if (grade < 60)
        printf("F\n");

    return 0;
}
#include <stdio.h>

int main(void) 
{
    int a, b;
    printf("Enter two interger numbers to exchange: ");
    scanf("%d%d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("a:%d b:%d\n", a, b);
    return 0;
}
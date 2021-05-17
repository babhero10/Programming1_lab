#include <stdio.h>

int main()
{
    int product_number, quantity;
    float price;

    printf("Enter Number of product: ");
    scanf("%d", &product_number);


    switch (product_number)
    {
        case 1:
            price = 2.98;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 9.98;
            break;
        case 4:
            price = 4.49;
            break;
        case 5:
            price = 6.87;
            break;

        default:
            printf("Unavailable product number\n");
            return 0;
    }

    printf("Enter Quantity for product: ");
    scanf("%d", &quantity);

    printf("Total Retail = %.2f$\n", price * quantity);

    return 0;
}
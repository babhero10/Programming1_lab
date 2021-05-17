#include <stdio.h>

int main()
{
    int quantity, discount_type;
    float unit_price;

    printf("Enter Unit price: ");
    scanf("%f", &unit_price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount type: ");
    scanf("%d", &discount_type);

    int discount;
 
    switch (discount_type)
    {
        case 1:
            discount = 10;
            break;

        case 2:
            discount = 15;
            break;
        
        default:
        discount = 5;
        break;
    }

    printf("Quantity: %d\n", quantity);
    printf("Unit price: %.2f\n", unit_price);

    if (discount == 5)
        printf("Discount type: Others\n");
    else
        printf("Discount type: %d\n", discount_type);

    const float total_price = quantity * unit_price;

    printf("Net price: %.2f\n", total_price - total_price * discount / 100);

    return 0;
}
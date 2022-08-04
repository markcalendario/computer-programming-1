#include <stdio.h>

int main()
{
    const double PI = 3.14;
    char name[80];
    int size, price;
    float area;
    const int diameterA = 10, diameterB = 12, diameterC = 14,
              priceA = 178, priceB = 259, priceC = 314;

    printf("Welcome to Domino's Pizza\n");
    printf("Customer's Name: ");
    scanf("%s", name);

    printf("\nOUR PIZZA MENU:\n");
    printf("%d inches for Php %d\n", diameterA, priceA);
    printf("%d inches for Php %d\n", diameterB, priceB);
    printf("%d inches for Php %d\n", diameterC, priceC);

    // Loop if the user inputs other diameter than the required (10, 12, 14).
    while ((size != diameterA || price != priceA) &&
           (size != diameterB || price != priceB) &&
           (size != diameterC || price != priceC))
    {
        printf("Please enter the diameter of pizza: ");
        scanf("%d", &size);
        printf("Please input the price of pizza: ");
        scanf("%d", &price);
    }

    area = PI * ((size / 2) * (size / 2));

    printf("\n===== Your receipt =====\n");
    printf("The area of %d-inch pizza per square inch is %.2f.\n", size, area);
    printf("%s, the total price is: Php %d\n", name, price);
    printf("Our least expensive pizza is %d that costs %d ", diameterA, priceA);

    return 0;
}
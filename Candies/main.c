#include <stdio.h>

int main()
{
    float mentos_kg, maxx_kg, frutos_kg, snowbear_kg, mentos_price, maxx_price,
        frutos_price, snowbear_price, price;

    char name[80];
    printf("Welcome to Calendario's Candy Store!\n");
    printf("Please enter your name to begin: ");
    scanf("%s", name);

    printf("Please enter kilograms for each candy you would like to buy.\n");
    printf("[Php 35.00/kg] Mentos: ");
    scanf("%f", &mentos_kg);
    printf("[Php 45.00/kg] Maxx: ");
    scanf("%f", &maxx_kg);
    printf("[Php 56.00/kg] Frutos: ");
    scanf("%f", &frutos_kg);
    printf("[Php 57.50/kg] Snowbear: ");
    scanf("%f", &snowbear_kg);

    mentos_price = mentos_kg * 35.00;
    maxx_price = maxx_kg * 45.00;
    frutos_price = frutos_kg * 56.00;
    snowbear_price = snowbear_kg * 57.50;
    price = mentos_price + maxx_price + frutos_price + snowbear_price;

    printf("\n===== %s's Receipt =====\n", name);
    printf("%.2f kg of Mentos: Php %.2f\n", mentos_kg, mentos_price);
    printf("%.2f kg of Maxx: Php %.2f\n", maxx_kg, maxx_price);
    printf("%.2f kg of Frutos: Php %.2f\n", frutos_kg, frutos_price);
    printf("%.2f kg of Snowbear: Php %.2f\n", snowbear_kg, snowbear_price);
    printf("Total price: %.2f\n", price);
    printf("Thank you! Have a nice day!");
    return 0;
}
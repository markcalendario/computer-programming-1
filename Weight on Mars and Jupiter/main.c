#include <stdio.h>

int main()
{
    float weightOnEarth, weightOnMars, weightOnJupiter;
    char name[80];
    printf("Martian and Jovian Weight Conversion.\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("\nKindly enter your weight in pounds: ");
    scanf("%f", &weightOnEarth);

    weightOnMars = weightOnEarth * 0.38;
    weightOnJupiter = weightOnEarth * 2.64;

    printf("\n=== %s, here's your corresponding weight on Jupiter and Mars ===", name);
    printf("\nOn Mars, you are %.2f pounds.", weightOnMars);
    printf("\nOn Jupiter, you are %.2f pounds.", weightOnJupiter);

    printf("\n\nThank you for using my program. Cheers!");
    return 0;
}
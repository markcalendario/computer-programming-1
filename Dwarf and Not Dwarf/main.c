#include <stdio.h>

int main()
{

    int integer, sumOfFactor = 0;
    char name[80];
    float halfOfNumber;

    printf("Welcome to DWARF or NOT DWARF program!\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    // Only accepts NON-NEGATIVE integers (including 0)
    do
    {
        printf("Please input a NON-NEGATIVE number: ");
        scanf("%d", &integer);
    } while (integer < 0);

    halfOfNumber = (float)integer / 2;

    printf("\nFactors of %d are: ", integer);
    for (int i = 1; i <= integer; i++)
    {
        if (integer % i == 0)
        {
            integer /= i;
            sumOfFactor += i;
            printf("%d ", i);
        }
    }

    printf("\nSum of its factor: %d\n", sumOfFactor);
    printf("Half of the number: %.1f\n", halfOfNumber);
    if (sumOfFactor > halfOfNumber)
    {
        printf("It is a DWARF!");
    }
    else
    {
        printf("It is NOT DWARF!");
    }

    printf("\nThank you %s, have a nice day!", name);
    return 0;
}
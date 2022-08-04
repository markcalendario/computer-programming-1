#include <stdio.h>

int main()
{

    char name[80];
    int integer;

    printf("Welcome to Prime Factors Displayer Program.\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    // Loop below only accepts non-negative integer (including 0)
    // repeat if less than to 0
    do
    {
        printf("Please enter a NON-NEGATIVE integer: ");
        scanf("%d", &integer);
    } while (integer < 0);

    printf("\nThe prime factor/s of %d is/are ", integer);
    for (int i = 1; i <= integer; i++)
    {
        if (integer % i == 0)
        {
            printf("%d ", i);
            integer /= i;
        }
    }

    printf("\nThank you %s, have a nice day!", name);
    return 0;
}
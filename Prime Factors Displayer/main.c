#include <stdio.h>

int main()
{

    char name[80];
    int integer;

    printf("Welcome to Prime Factors Displayer Program.\n");
    printf("Kindly enter your name: ");
    scanf("%s", name);

    // Only accepts positive integers (not including 0)
    do
    {
        printf("Please enter a POSITIVE integer: ");
        scanf("%d", &integer);
    } while (integer <= 0);

    printf("\nThe prime factor/s of %d is/are ", integer);
    for (int i = 1; i <= integer; i++)
    {
        if (integer % i == 0)
        {
            integer /= i;
            printf("%d ", i);
        }
    }

    printf("\nThank you %s, have a nice day!", name);
    return 0;
}
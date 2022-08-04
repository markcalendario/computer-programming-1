#include <stdio.h>

int main()
{
    int hours, minutes;
    char name[80];

    printf("Welcome to Hours to Minutes Conversion!\n");
    printf("Please state your name: ");
    scanf("%s", name);

    printf("\nOk %s, please enter hours (must be a positive integer): ");
    scanf("%d", &hours);
    minutes = hours * 60;
    printf("%d hours is equal to %d minutes\n", hours, minutes);

    printf("\nThank you %s, have a nice day!", name);
    return 0;
}